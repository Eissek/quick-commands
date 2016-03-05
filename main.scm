;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; quick-commands v. 0.10.0
; main.scm
; Created by Eissek
; 13 September 2015
; Copyright 2015
;
; A small program that allows users to
; save commands or any other information, they
; wish to store, such as terminal commands.
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(declare (unit main))
(require-extension posix)
(require-extension sqlite3)
(require-extension srfi-13)



;; (print "hello")

;; (define db-path (string-append
;;                  (get-environment-variable "HOME") "/qcommands.db"))

(define db-path
  "/media/sf_Projects/Chicken/quick-commands/test-db/qcommands-test.db")

;; maybe create database from schema if not found
(if (not (file-exists? db-path))
    (print "Could not locate qcommands.db in " (get-environment-variable "HOME")))

(define qcommands-db
  (open-database db-path))

(define (get-row-count .)
  (first-result qcommands-db "SELECT COUNT (Command) FROM commands"))

;; get row count and check if its has increased
(define (row-inserted? row-count) ; check the first column name?
  (let ((new-row-count (get-row-count)))
    (if (< row-count new-row-count)
        #t
        #f)))


(define (insert-cmd cmd desc . tags)
  (call-with-current-continuation
   (lambda (k)
     (with-exception-handler
      (lambda (x)
        (k "Error: Problem with insertion.")
        (print ((condition-property-accessor 'exn 'message) x)))
      (lambda ()
        (let ((sql "INSERT INTO commands (Command, Description, Tags) VALUES (?,?,?)"))
          (string-join tags " ")
          (execute qcommands-db sql cmd desc (string-join tags " "))))))))




;; insert command with no tags
(define (delete-command . args)
  (call-with-current-continuation
 (lambda (k)
   (with-exception-handler
    (lambda (x)
      (k "Command not found.")
      (print ((condition-property-accessor 'exn 'message) x)))
    (lambda ()
      (let ((args (flatten args)))
        (cond ((= 1 (length args))
               (let ((sql "SELECT command FROM commands WHERE rowid = ?;")
                     (delete-sql "DELETE FROM commands WHERE rowid = ?;")
                     (rowid (car args)))
                 ;; (print rowid " " cmd)
                 (let ((result (first-result qcommands-db sql rowid)))
                   (if (string? result)
                       (begin
                         ;; (print result)
                         (execute qcommands-db delete-sql rowid)
                         (print "Deleted " result))))))
              (else (print "Incorrect number of arguments")
                    (print args)))))))))


;; (define (search-commands))
(define (print-commands . cmd) ;; was originall . cmd
  (let ((new-cmd (append
                  '("\n")
                  (list (number->string (car cmd)))
                  (cdr cmd)
                  )))
    (string-join new-cmd " | ")))

#;(define (print-row . row) (string-join row))

(define (search-commands . cmd) 
  (call-with-current-continuation
   (lambda (k)
     (with-exception-handler
      (lambda (x)
        (print ((condition-property-accessor 'exn 'message) x))
        (k "Search error."))
      (lambda ()
        (let ((sql "SELECT rowid, Command, Description, Tags FROM commands WHERE Command LIKE ?;"))
          (map-row print-commands qcommands-db sql (string-append "%"(string-join (flatten cmd))"%"))
          ))))))

(define (filter-tags . tags)
  (call-with-current-continuation
   (lambda (k)
     (with-exception-handler
      (lambda (x)
        (k "Tags search error.")
        (print ((condition-property-accessor 'exn 'message) x)))
      (lambda ()
        (let ((sql "SELECT rowid, Command, Description, Tags FROM commands WHERE Tags LIKE ?;"))
          (map-row print-commands qcommands-db sql (string-append "%" (string-join (flatten tags)) "%"))))))))

(define select-all
  (prepare qcommands-db "SELECT rowid, Command, Description, Tags FROM commands;"))


(define (list-stored-commands .)
  (call-with-current-continuation
   (lambda (k)
     (with-exception-handler
      (lambda (x)
        (k "Error. Could not list commands")
        (print ((condition-property-accessor 'exn 'message) x)))
      (lambda ()
        (let ((command (map-row create-rows select-all)))
          command))))))


(define (print-commands-table .)
  (print "hi"))


;; may need to return list
(define (fill-remainder string length fill)
  (let ((spaces-left
	 (- length (string-length string))))
    (string-append string (make-string spaces-left #\space))))

(define (add-bar str)
  (string-append str "|"))

;; (define (add-newline str)
;;   )

(define (split-row str length)
  (let ((split (if (< (string-length str) 10)
		   (append (list (fill-remainder str length #\space)
				 (make-string 10 #\space)))
		   (append (list (string-take str 10)
				 (string-drop str 10))))))
    split))


(define (set-single-or-combined new-list current-row next-row)
  (cond ((= (length new-list) 1)
	 (set! current-row (append current-row new-list)))
	((= (length new-list) 2)
	 (set! current-row (append current-row (car new-list)))
	 (set! next-row (append next-row (cdr new-list))))))


(define (add-bar-and-newline row1 row2 row3)
  (string-join (map (lambda (x)
	  (string-append (string-join x "|" 'suffix) "\n"))
	(list row1 row2 row3)) ""))




(define (select-column counter)
  (cond ((= counter 1) "cmd")
	((= counter 2) "desc")
	((= counter 3) "tags")))

(define (splitter args) ;; used to have several args
  (let ((row1 (car args))
	(row2 (car (cdr args)))
	(row3 (car (cdr (cdr args))))
	(i (car (cdr (cdr (cdr args))))))
   (if (> i 3)
       ;; (parse-row 'row2 first-row next-row '() 0)
       (parse-row (string->symbol
		   (string-append "row" (number->string (+ i 1))))
		  first-row next-row '() 0)
      (let* ((split-list (split-row (select-column i) 10))
	    (next-column (select-column i))
	    (rows (cond ((= i 1)
			 (append row1 (list (car split-list)))
			 (append row2 (list (cdr split-list)))
			 row3
			 (+ i 1))
			((= i 2)
			 row1
			 (append row2 (list (car split-list)))
			 (append row3 (list (cdr split-list)))
			 (+ i 1))
			((= i 3)
			 row1
			 row2
			 (append row3 (list (car split-list)))
			 (+ i 1)))))
	(if (> (length split-list) 0)
	    (splitter rows)))) )
  )


(define (create-rows row-list)
  (let ((rowid (car row-list))
	(cmd (car (cdr row-list)))
	(desc (car (cdr (cdr row-list))))
	(tags (string-join (cdr (cdr (cdr row-list))) " ")))
    (define (parse-row this-row row1 row2 row3 j)
      (let ((row1 row1)
	    (row2 row2)
	    (row3 row3)
	    (j j) ;; Previously i
	    (select-column
	     (lambda (count)
	       (cond ((= count 1) cmd)
		     ((= count 2) desc)
		     ((= count 3) tags))))) 
	(if (< (length (list this-row)) 3)
	    
	    (cond ((eq? 'row1 this-row)
		   (splitter (list row1 row2 row3 1))
		   ;; (letrec ((splitter
		   ;; 	     (lambda (first-row next-row i)
		   ;; 	       (if (> i 3)
		   ;; 		   (parse-row 'row2 first-row next-row '() 0) ;;maybe use next-row as selected row
		   ;; 		   (let ((split-list (split-row (select-column i) 10))
		   ;; 			 (next-column (select-column i)))
		   ;; 		     (if (= (length split-list) 1)
		   ;; 			 (splitter
		   ;; 			  (append
		   ;; 			   first-row split-list
		   ;; 			   next-row
		   ;; 			   (+ i 1)))
		   ;; 			 (splitter
		   ;; 			  (append first-row (list (car split-list)))
		   ;; 			  (append next-row (list (car (cdr split-list))))
		   ;; 			  (+ i 1)
		   ;; 			  ;; next-column
		   ;; 			  )))))))
		   ;;   (splitter row1 row2 1))
		   )
		  ((eq? 'row2 this-row)
		   (print "ROW2")
		   (print row1 row2))))))
    (parse-row 'row1 '() '() '() 1)))



;; (define (create-rows row-list)
;;   (let ((rowid (car row-list))
;; 	(cmd (car (cdr row-list)))
;; 	(desc (car (cdr (cdr row-list))))
;; 	(tags (string-join (cdr (cdr (cdr row-list))) " ")))
;;     (define (parse-row row row1 row2 row3 i)
;;       (let ((row1 row1)
;; 	    (row2 row2)
;; 	    (row3 row3)
;; 	    (i i))
;; 	(if (< (length (list row)) 3)
;; 	    (cond ((eq? 'row1 row)
;; 		   ;; (let ((split-list (split-row str 10)))
;; 		   ;;   )
;; 		   (let ((temp-split '()))
;; 		     )
;; 		   (map (lambda (str)
;; 			  (let ((split-list (split-row str 10)))
;; 			    )))
		   
;; 		   ;; (map (lambda (str)
;; 		   ;; 	  (let ((split-list (split-row str 10)))
;; 		   ;; 	    (if (= (length split-list) 1)
;; 		   ;; 		(parse-row 'row2
;; 		   ;; 			   (append row1 split-list) row2 row3 (+ i 1))
;; 		   ;; 		(parse-row 'row2
;; 		   ;; 			   (append row1 (car split-list))
;; 		   ;; 			   (append row2 (cdr split-list))
;; 		   ;; 			   row3
;; 		   ;; 			   (+ i 1)))))
;; 		   ;; 	(list cmd desc tags))
;; 		   )
;; 		  ((eq? 'row2 row)
;; 		   (print "b sbs")))
;; 	    (if (not (eq? 'row3 row))
;; 		(begin (parse-row
;; 			(string-> symbol (string-append "row"
;; 					(string->number (+ i 1))))
;; 			(string-append "row"
;; 				       (string->number (+ i 1))))))
;; 	    ;; (print "hey")
;; 	    ;; (print row1 row2)
;; 	    )
;; 	))
;;     (parse-row 'row1 '() '() '() 1) ))






;; (define (print-row-table . row-list)
;;   (create-rows))

;; (define (create-rows . row-list)
;;   (let ((row1 '())
;; 	(row2 '())
;; 	(row3 '())
;; 	(i 1)
;; 	(rowid (car row-list))
;; 	(cmd (car (cdr row-list)))
;; 	(desc (car (cdr (cdr row-list))))
;; 	;; (tags (car (cdr (cdr row-list))))
;;         (tags (string-join (cdr (cdr (cdr row-list))) " "))
;; 	(current-buffer '()))
;;     (define (parse-row row)
;;       ;; (print row-list)
;;       ;; (print rowid)
;;       ;; (print cmd )
;;       ;; (print desc)
;;       ;; (print tags)
;;       ;; ;; (print (split-row cmd 10))
;;       ;; (print (list cmd desc tags))
;;       (if (< (length (list row)) 3)
;; 	  (cond ((eq? 'row1 row)
;; 		 (print "HEY")
;; 		 (map (lambda (str)
;; 			(let ((split-list (split-row str 10)))
;; 			  (if (= (length split-list) 1)
;; 			      (set! row1 (append row1 split-list))
;; 			      (begin (set! row1 (append row1 (list (car split-list))))
;; 				     ;; (set! row2 (append row2 (cdr split-list)))
;; 				     (set! current-buffer (append current-buffer (cdr split-list))))))
;; 			) (list cmd desc tags))
;; 		 (print (map add-bar row1)))
		
;; 		((eq? 'row2 row) (print "row2 ss") 
;; 		 (map (lambda (str)
;; 		 	(let ((split-list (split-row str 10)))
;; 			  (print split-list)
;; 			  ;; (print (length split-list))
;; 		 	  (if (= (length split-list) 1)
;; 		 	      (set! row2 (append row2 split-list))
;; 		 	      (begin (set! row2 (append row2 (list (car split-list))))
;; 		 		     ;; (set! row3 (append row3 (cdr split-list)))
;; 				     (set! current-buffer (append current-buffer (cdr split-list)))))
			  
;; 		 	  )) ;; row2
;; 			     (take current-buffer 3))
;; 		 (print (map add-bar row2))
;; 		 )
;; 		((eq? 'row3 row) (print "YAAAAAAAAAS")
;; 		 (map (lambda (str)
;; 			(let ((split-list (split-row str 10)))
;; 			  ;; (if (= (length split-list) 1))
;; 			  (set! row3 (append row3 (list (car split-list))))
;; 			  )) (drop current-buffer 3))
;; 		 (print (map add-bar row3)))))
      
;;       (if (not (eq? 'row3 row))
;; 	      (begin (set! i (+ i 1))
;; 		     (print i)
;; 		     (parse-row
;; 		      (string->symbol
;; 		       (string-append "row" (number->string i)))))
;; 	      ;; (print (map add-bar (append row1 row2 row3)))
;; 	      ;; (append (map (lambda (x)
;; 	      ;; 		     (add-bar x)) (append row1 row2)))
;; 	      ;; (print (string-append
;; 	      ;; 	(string-join (append row1 row2) "|" 'suffix) "\n"))
;; 	      (print (add-bar-and-newline row1 row2 row3)))
;;       )
;;     (parse-row 'row1)))


(define (add-command . args)
  ;; args stucture (command description tag1 tag2...)
  (let ((row-count (get-row-count))
        (args (flatten args)))
    (cond ((>= (length args) 3)
           ;; (print args)
           (let ((command (car args))
                 (desc (car (cdr args)))
                 (tags (string-join (list-tail args 2))))
             ;;(print command)
             ;; (print "desc " desc)
             ;; (print "Tags:" tags)
             (insert-cmd command desc tags)
             (if (row-inserted? row-count)
                   (print "Added " command))))
          ((= (length args) 2)
           (let ((command (car args))
                 (desc (car (cdr args))))
             (insert-cmd command desc "undefined")
             (if (row-inserted? row-count)
                 (print "Added " command))))
          (else (print "Wrong number of arguments.")))))

(define (update-command . args)
  (call-with-current-continuation
   (lambda (k)
     (with-exception-handler
      (lambda (x)
        (k  "Error: Problem updating command.")
        (print ((condition-property-accessor 'exn 'message) x)))
      (lambda ()
        ;; (print "args " args)
        (let* ((args (flatten args))
               (rowid (car args))
               (column (string-downcase (car (cdr args))))
               (data (string-join (list-tail (flatten args) 2)))
               (sql (string-append "UPDATE commands SET " column " = ?, Updated = DateTime('now') WHERE rowid = ?")))
          ;; (print "row " rowid " " column " " data)
          (cond ((or (equal? column "command")
                     (equal? column "Description")
                     (equal? column "Tags"))
                 ;; (print "desc")
                 (execute qcommands-db sql data rowid)
                 (if (< 1 (change-count qcommands-db))
                     (print "Error. Could not update specified row.")
                     (print (change-count qcommands-db))))
                (else (print "Error. Please check syntax.")))))))))


