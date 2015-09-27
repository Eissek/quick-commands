;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; cli.scm
;; Created by Eissek
;; 21 September 2015
;;
;; Provides a Command Line Interface for the
;; quickCommands application
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; Dependent on main.scm
(require-extension args)
(declare (uses main))

(define (test-list-commands .)
  (list-stored-commands))

(define (handle-cmd-line-arguments PROC option)
  (let ((first-arg (car (command-line-arguments)))
        (rest (cdr (command-line-arguments))))
    (cond ((equal? option first-arg)
           (print "first ")
           (PROC rest))
          ((number? (string-contains first-arg "-"))
           (print "FOUND - DASH")
           (print (command-line-arguments))
           (PROC rest))
          (else
           (print "args " (command-line-arguments))
           (PROC (command-line-arguments))))))

(define opts
  (list (args:make-option (c cookie) (required: "name") "Cookie for name"
                          (print "Cookie for " arg)
                          (test-list-commands))
        (args:make-option (a add)
                          (required: "COMMAND" "DESCRIPTION" "TAGS")
                          "Add Command or Data"
                          (handle-cmd-line-arguments add-command arg))
        (args:make-option (d delete) (required: "ID" "COMMAND")
                          "Delete Command"
                          (print "Deleting..")
                          (handle-cmd-line-arguments delete-command arg))
        (args:make-option (l list) #:none "List stored commands"
                          (list-stored-commands))
        (args:make-option (f filter) (required: "TAG")
                          "Filter/Search for a specific tag"
                          (print "Starting filter ")
                          (handle-cmd-line-arguments filter-tags arg))
        (args:make-option (s search) (required: "QUERY")
                          "Search for a command/data"
                          (print "Starting search ")
                          (handle-cmd-line-arguments search-commands arg))
        (args:make-option (t test) (required: "TEST")
                          "testing multiple arguments"
                          (print "cml args " (command-line-arguments))
                          (print "cdr " (string-join (cdr(command-line-arguments))))
                          (print "arg " arg))))

(args:parse (command-line-arguments) opts)
