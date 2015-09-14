;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; main.scm
; Created by Eissek
; 13 September 2015
;
; A small program that allows users to
; save shortcuts or any other information, they
; wish to store, such as terminal commands.
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define (add-command
         command desc tags)
  (string-append command " " desc " " tags))


(define (hello)
  (display "Hello World"))
