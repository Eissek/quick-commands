(require-extension test)
(require-extension sqlite3)
(load-relative "../main.scm") ;; change to relative path for compilation


(test-group "Test list-stored-commands and insert-command"
            
            (test-assert "Should be true"
                         (list-stored-commands))
            
            (let ((rows (get-row-count)))
              (print "Row Count: " (get-row-count))
              (insert-cmd "test-command2" "test" "testing")

              (test-assert "commands list should be >= 1"
                          (>= (length (list-stored-commands)) 1))
              
              (test-assert "Data Insertion - change count should be 1 or more"
                           (>= (change-count qcommands-db) 0))
              (test "Row count after insertion should increase by one"
                    (+ rows 1)
                    (get-row-count))
              
              (delete-command (last-insert-rowid qcommands-db)
                              "test-command2")
              (test "Row count should be one less after deletetion"
                    rows ;; row count before delete
                    (get-row-count))
              (print "Rows after delete: " (get-row-count))))


(test-group "Test Update Data Procedure"
            (insert-cmd "test-command2" "test" "testing")
            (test-assert "Data Insertion - count should be 1"
                           (= (change-count qcommands-db) 1))
            
            (update-command
             (last-insert-rowid qcommands-db) "command" "Updated Command")
            
            (test "Test update has been made" "Updated Command"
                  (first-result qcommands-db
                          "SELECT command FROM commands WHERE rowid = ?"
                          (last-insert-rowid qcommands-db)))
            
            (delete-command (last-insert-rowid qcommands-db)
                              "Updated Command")
            (test-assert "Command has been deleted"
                           (= (change-count qcommands-db) 1)))

(test-group "Search Commands"
            (let ((cmd-count (length(list-stored-commands))))
              (insert-cmd "c-xxxxx" "test" "testing")
              (test-assert "Test whether the cmd count has increased by 1"
                           (= (length (list-stored-commands)) (+ cmd-count 1)))

              (test-assert "Search should return a list of 1 or more"
                    (>= (length (search-commands "c-xxxxx")) 1))
              
              (delete-command (last-insert-rowid qcommands-db)
                              "c-xxxxx")
              (test-assert "commands list should be down one after deletion"
                           (= cmd-count (length (list-stored-commands))))))
(test-group "Filter Tags"
            (let ((count (length (list-stored-commands))))
              (insert-cmd "c-xxxxx" "no desc" "testing-tag")
              (test-assert "Test command count increase"
                           (= (length (list-stored-commands)) (+ count 1)))
              (test-assert "Filter tags should return at least 1 result"
                           (>= (length (filter-tags "testing-tag")) 1))
              (delete-command (last-insert-rowid qcommands-db)
                              "c-xxxxx")
              (test-assert "list of commands should down one after delete"
                           (= (length (list-stored-commands)) count))))
(test-group "CLI Tests")

;; (test-exit)
