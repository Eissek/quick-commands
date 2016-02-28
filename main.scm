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
(define (print-commands . cmd)
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
        (let ((command (map-row print-commands select-all)))
          command))))))


(define (print-commands-table .)
  (print "hi"))


;; may need to return list
(define (fill-remainder string length fill)
  (let ((spaces-left
	 (- length (string-length string))))
    (string-append string (make-string spaces-left #\space))))

(define (split-row str length)
  (let ((split (if (< (string-length str) 10)
		   (append (list (fill-remainder str length #\space))
			   (list (make-string 10 #\space)))
		   (append (list (string-take str 10)
				 (string-drop str 10))))))
    split))


(define (set-single-or-combined new-list current-row next-row)
  (cond ((= (length new-list) 1)
	 (set! current-row (append current-row new-list)))
	((= (length new-list) 2)
	 (set! current-row (append current-row (car new-list)))
	 (set! next-row (append next-row (cdr new-list))))))


(define (create-rows row-list)
  (let ((row1 '())
	(row2 '())
	(row3 '())
	(i 1)
	(cmd (car row-list))
	(desc (car (cdr row-list)))
	;; (tags (car (cdr (cdr row-list))))
	(tags (string-join (cdr (cdr row-list)) " "))
	(current-buffer '()))
    (define (parse-row row)
      (if (< (length (list row)) 3)
	  (cond ((eq? 'row1 row)
		 (print "HEY")
		 (map (lambda (str)
			(let ((split-list (split-row str 10)))
			  (if (= (length split-list) 1)
			      (set! row1 (append row1 split-list))
			      (begin (set! row1 (append row1 (list (car split-list))))
				     ;; (set! row2 (append row2 (cdr split-list)))
				     (set! current-buffer (append current-buffer (cdr split-list))))))
			) '("cmd" "descdddddddddd" "tagggggggggs" ))
		 (print row1))
		
		((eq? 'row2 row) (print "row2 ss") 
		 (map (lambda (str)
		 	(let ((split-list (split-row str 10)))
		 	  (if (= (length split-list) 1)
		 	      (set! row2 (append row2 split-list))
		 	      (begin (set! row2 (append row2 (list (car split-list))))
		 		     (set! row3 (append row3 (cdr split-list)))))
		 	  )) ;; row2
			     current-buffer)
		 (print row2)
		 )
		((eq? 'row3 row) (print "YAAAAAAAAAS"))))
      
      (if (not (eq? 'row3 row))
	      (begin (set! i (+ i 1))
		     (print i)
		     (parse-row
		      (string->symbol
		       (string-append "row" (number->string i))))))
      )
    (parse-row 'row1)))


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


