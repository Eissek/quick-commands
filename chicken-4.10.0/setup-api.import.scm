;;;; setup-api.import.scm - GENERATED BY CHICKEN 4.10.0 -*- Scheme -*-

(eval '(import
         scheme
         chicken
         foreign
         irregex
         utils
         posix
         ports
         extras
         data-structures
         srfi-1
         srfi-13
         files))
(##sys#register-compiled-module
  'setup-api
  (list '(execute . setup-api#execute))
  '((standard-extension . setup-api#standard-extension)
    (host-extension . setup-api#host-extension)
    (install-extension . setup-api#install-extension)
    (install-program . setup-api#install-program)
    (install-script . setup-api#install-script)
    (setup-verbose-mode . setup-api#setup-verbose-mode)
    (setup-install-mode . setup-api#setup-install-mode)
    (deployment-mode . setup-api#deployment-mode)
    (installation-prefix . setup-api#installation-prefix)
    (destination-prefix . setup-api#destination-prefix)
    (runtime-prefix . setup-api#runtime-prefix)
    (chicken-prefix . setup-api#chicken-prefix)
    (find-library . setup-api#find-library)
    (find-header . setup-api#find-header)
    (program-path . setup-api#program-path)
    (remove-file* . setup-api#remove-file*)
    (patch . setup-api#patch)
    (abort-setup . setup-api#abort-setup)
    (setup-root-directory . setup-api#setup-root-directory)
    (create-directory/parents . setup-api#create-directory/parents)
    (test-compile . setup-api#test-compile)
    (try-compile . setup-api#try-compile)
    (run-verbose . setup-api#run-verbose)
    (extra-features . setup-api#extra-features)
    (extra-nonfeatures . setup-api#extra-nonfeatures)
    (copy-file . setup-api#copy-file)
    (move-file . setup-api#move-file)
    (sudo-install . setup-api#sudo-install)
    (keep-intermediates . setup-api#keep-intermediates)
    (version>=? . setup-api#version>=?)
    (extension-name-and-version . setup-api#extension-name-and-version)
    (extension-name . setup-api#extension-name)
    (extension-version . setup-api#extension-version)
    (remove-directory . setup-api#remove-directory)
    (remove-extension . setup-api#remove-extension)
    (read-info . setup-api#read-info)
    (register-program . setup-api#register-program)
    (find-program . setup-api#find-program)
    (shellpath . setup-api#shellpath)
    (setup-error-handling . setup-api#setup-error-handling))
  (list (cons 'compile (syntax-rules () ((_ exp ...) (run (csc exp ...)))))
        (cons 'run (syntax-rules () ((_ exp ...) (execute (list `exp ...))))))
  (list (cons 'ignore-errors
              (syntax-rules
                ()
                ((_ body ...) (handle-exceptions ex #f body ...))))))

;; END OF FILE
