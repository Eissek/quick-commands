;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; main.scm
; Created by Eissek
; 13 September 2015
;
; A small program that allows users to
; save shortcuts or any other information, they
; wish to store, such as terminal commands.
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(require-extension sqlite3) 
(define (hello)
  (print "Hello World"))

(define this-path
  (lambda ()
    (print (current-directory))))

(define qcommands-db
  (open-database "/media/sf_Projects/Chicken/quick-commands/resources/qcommands.db"))


(define (get-row-count .)
  (first-result qcommands-db "SELECT COUNT (Command) FROM commands"))

;; get row count and check if its has increased
(define (row-inserted? row-count) ; check the first column name?
  (let ((new-row-count (get-row-count)))
    (if (< row-count new-row-count)
        #t
        #f)))

;; insert command with tags
;; (define (insert-cmd-in-db cmd desc . tags)
  ;; (let ((insert-cmd (prepare qcommands-db "INSERT INTO commands (Command, Description, Tags) VALUES (?,?,?)")))
    ;; (print tags)
    ;; (string-join tags)
    ;; (print (string-join tags " "))
    ;; (execute insert-cmd cmd desc (string-join tags))
    ;; (finalize! qcommands-db insert-cmd)))

(define (insert-cmd cmd desc . tags)
  (let ((sql "INSERT INTO commands (Command, Description, Tags) VALUES (?,?,?)"))
    (string-join tags " ")
    (execute qcommands-db sql cmd desc (string-join tags " "))))

#;(call-with-current-continuation
 (lambda (k)
   (with-exception-handler
   (lambda (x)
   (k 'Exception))
   (lambda ()
   (+ 1 (raise 'error))))))



;; insert command with no tags
(define (delete-command rowid cmd)
  (call-with-current-continuation
 (lambda (k)
   (with-exception-handler
    (lambda (x)
      (k "Command not found."))
    (lambda ()
      (let ((sql "SELECT command FROM commands WHERE rowid = ? AND command = ?;")
            (delete-sql "DELETE FROM commands WHERE rowid = ?;"))
        (let ((result (first-result qcommands-db sql rowid cmd)))
          (if (string? result)
              (begin
                (print result)
                (execute qcommands-db delete-sql rowid))))))))))

;; (define (search-commands))
(define (search-commands . cmd)
  (print "begin search"))

(define select-all
  (prepare qcommands-db "SELECT rowid, Command, Description, Tags FROM commands;"))

(define (print-commands . cmd)
  (let ((new-cmd (append
                  (list (number->string (car cmd)))
                  (cdr cmd))))
    ;; (print new-cmd)
    (pp (string-join new-cmd " | "))))

(define (list-stored-commands .)
  (for-each-row print-commands select-all)
  ;; (finalize! qcommands-db select-all)
  )


(define (add-command . args)
  ;; args stucture (command description tag1 tag2...)
  ;; (qcommands-db)
  (let ((row-count (get-row-count)))
    (cond ((>= (length args) 3)
           (print "Its more than or equal to 3")
           ;; (print args)
           (let ((command (car args))
                 (desc (car (cdr args)))
                 (tags (string-join (list-tail args 2))))
             (print command)
             (print "desc " desc)
             (print "Tags:" tags)
             (insert-cmd command desc tags)
             (if (row-inserted? row-count)
                   (print "Added " command))))
          ((= (length args) 2)
           (let ((command (car args))
                 (desc (car (cdr args))))
             (insert-cmd command desc "undefined")
             (if (row-inserted? row-count)
                 (print "Added " command)))
           (print "its two"))
          (else (print "Wrong number of arguments.")))))
