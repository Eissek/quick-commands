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

(define (add-command . args)
  ;; args stucture (command description tag1 tag2...)
  ;; (qcommands-db)
  (cond ((>= (length args) 3)
         (print "Its more than or equal to 3")
         ;; (print args)
         (let ((command (car args))
               (desc (car (cdr args)))
               (tags (string-join (list-tail args 2) " ")))
           (print command)
           (print "desc " desc)
           (print "Tags:" tags)))
        ((= (length args) 2)
         (print "its two"))
        (else (print "Wrong number of arguments."))))



;; insert command with tags
(define (insert-cmd-in-db cmd desc . tags)
  (let ((insert-cmd (prepare qcommands-db "INSERT INTO commands (Command, Description, Tags) VALUES (?,?,?)")))
    (execute insert-cmd cmd desc (string-join tags))
    (finalize! qcommands-db insert-cmd)))


;; insert command with no tags
;; (define (delete-command .args))
;; (define (store-in-db .args))
;; (define (search-commands))
(define select-all
  (prepare qcommands-db "SELECT Command, Description, Tags FROM commands"))

(define (print-commands . cmd)
  (pp (string-join cmd " | ")))

(define (list-stored-commands .)
  ;; (qcommands-db)
  (for-each-row print-commands select-all)
  (finalize! qcommands-db select-all))


