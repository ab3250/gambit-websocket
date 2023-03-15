(define-library (wslib) 
  (namespace "")
    (export
      grid1
      grid2
      grid3)

(begin

   (define grid1 (list->vector
     (append
       '(5 3 0 0 7 0 0 0 0)
       '(6 0 0 1 9 5 0 0 0)
       '(0 9 8 0 0 0 0 6 0)
       '(8 0 0 0 6 0 0 0 3)
       '(4 0 0 8 0 3 0 0 1)
       '(7 0 0 0 2 0 0 0 6)
       '(0 6 0 0 0 0 2 8 0)
       '(0 0 0 4 1 9 0 0 5)
       '(0 0 0 0 8 0 0 7 9))))

  (define grid2 (list->vector
    (append
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 1 0 0 0 0 0 0)
      '(0 0 0 0 0 0 2 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0))))

  (define grid3 (list->vector
    (append
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0)
      '(0 0 0 0 0 0 0 0 0))))  
))