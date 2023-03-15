(define-library (wslib) 
  (namespace "")
    (export
      grid1
      grid2
      grid3
      nested-loop
      for
      let/ec
   deck->JSONString
   grid->JSONString 
   check
   no-zeros-left?
   )

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


(define-syntax nested-loop
  (syntax-rules ()
    ((_ l1 l1-start l1-end l2 l2-start l2-end body ...)
         (for l1-start l1-end (lambda(l1)
		    (for l2-start l2-end (lambda(l2)
			       (begin
				body ... ))))))))

(define for (lambda (start end func)
     (let loop ((index start))
        (if (> index end) #t
          (begin
            (func index)
            (loop (+ index 1)))))))
				
(define-syntax let/ec 
  (syntax-rules ()
    ((_ return body ...)
     (call-with-current-continuation
      (lambda (return)
        body ...)))))

(define (deck->JSONString deck)
    (let loop1 ((idx 0)(end (length deck))(str "["))  
      (if (not(= idx end))
          (loop1 
              (+ idx 1) 
              end 
              (string-append str "\"" (list-ref deck idx) "\"" (if(not(= idx (- end 1))) "," "]") " "))
              str)))

(define (grid->JSONString grid)
    (deck->JSONString (map number->string (vector->list grid))))

(define (check cell_list num grid) ;free to place number t/f  
    (let loop ((cell 0))      
      (if (= (vector-ref grid (vector-ref cell_list cell)) num)
          #f
          (if (not (= cell 8)) (loop (+ cell 1)) #t))))

(define (no-zeros-left? grid)
    (let ((length (- (vector-length grid) 1)))
      (let loop ((count 0)) 
        (if (= (vector-ref grid count) 0)
          #f
        (if (not (= count length))
          (loop (+ count 1))
          #t)))))

;(define (get_row_cells row)
;      (let loop ((start (* row 9)))
;        (vector start (+ start 1) (+ start 2) (+ start 3) (+ start 4) (+ start 5) (+ start 6) (+ start 7) (+ start 8))))

;(define (get_col_cells col)
;      (vector col (+ col 9) (+ col 18) (+ col 27) (+ col 36) (+ col 45) (+ col 54) (+ col 63) (+ col 72)))

))
