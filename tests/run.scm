;; (use test)
(require-extension test)
(require-extension sqlite3)
(load-relative "../main.scm") ;; change to relative path for compilation
;; to test db, make main.scm have the option of taking
;; a db file, if it is not suggested then use the default
;; location

(hello)
(define db
  (open-database "/media/sf_Projects/Chicken/quick-commands/tests/qcommands-test.db"))
(test-group "PROC Tests"
            
            (test-assert "Should be true"
                         (list-stored-commands))
            
            (let ((rows (get-row-count)))
              (print "Row Count: " (get-row-count))

              (insert-cmd "test-command2" "test" "testing")
              (test-assert "Data Insertion - count should be 1 or more"
                           (> (change-count qcommands-db) 0))
              (test "Row count after insertion should be 1 up"
                    (+ rows 1)
                    (get-row-count))
              
              (delete-command (last-insert-rowid qcommands-db)
                              "test-command2")
              (test "Row count should be one less after deletetion"
                    rows ;; row count before delete
                    (get-row-count))
              (print "Rows after delete: " (get-row-count)))
            )
(test-group "Update Data"
            (insert-cmd "test-command2" "test" "testing")
            (test-assert "Data Insertion - count should be 1"
                           (= (change-count qcommands-db) 1))
            
            (update-command
             (last-insert-rowid qcommands-db)
             "command"
             "Updated Command")
            (test "Test update has been made" "Updated Command"
                  (first-result qcommands-db
                          "SELECT command FROM commands WHERE rowid = ?"
                          (last-insert-rowid qcommands-db)))
            
            (delete-command (last-insert-rowid qcommands-db)
                              "Updated Command")
            (test-assert "Command has been deleted"
                           (= (change-count qcommands-db) 1)))
(test-group "CLI Tests")

;; (test-exit)
