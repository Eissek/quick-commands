;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; cli.scm
; Created by Eissek
; 21 September 2015
;
; Provides a Command Line Interface for the
; quickCommands application
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; Dependent on main.scm
(declare (uses main))
(require-extension args)

(define (test-list-commands .)
  (list-stored-commands))

(define opts
  (list (args:make-option (l list) #:none "Lists all the currently stored commands/data"
                          (print "list commands work"))
        (args:make-option (a add) (required: "COMMAND" "DESCRIPTION" "TAG") "Add data COMMAND DESCRIPTION TAG"
                          (print "Test add command"))))

;; (args:parse (command-line-arguments) opts)



#;(receive (options operands)
    (args:parse (command-line-arguments) opts))
