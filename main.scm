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



(define (add-command . args)
  ;; args stucture (command description tag1 tag2...)
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

(define (delete-command .args))
(define (store-in-db .args))
(define (search-commands))
(define (list-stored-commands))


