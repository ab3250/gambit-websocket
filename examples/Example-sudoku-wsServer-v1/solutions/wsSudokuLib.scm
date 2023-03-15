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

(define-syntax unless
 (syntax-rules ()
   ((unless test . body)
    (when (not test) . body))))
    
(define (knuth-shuffle lst-org)  
  (let loop ((count (length lst-org)) (lst lst-org))      
    (if (zero? count)
    	lst
	(let*   ((j (random-integer count))
		 (new-count (- count 1))
	         (tmp (list-ref lst new-count))
	         (lst2 (list-set lst new-count (list-ref lst j)))
	         (lst3 (list-set lst2 j tmp)))	         
	         (loop new-count lst3)))))

(define (list-set lst idx val)
  (if (null? lst)
    lst
    (cons
      (if (zero? idx)
        val
        (car lst))
      (list-set (cdr lst) (- idx 1) val))))


(define (deck->JSONString deck)
    (let loop1 ((idx 0)(end (length deck))(str "["))  
      (if (not(equal? idx end))
          (loop1 (+ idx 1) end (string-append str "\"" (list-ref deck idx) "\", "))
          (begin
            (string-set! str (- (string-length str) 2) #\])
            str))))

(define (grid->JSONString grid)
    (deck->JSONString (map number->string (vector->list grid))))
    

(define (displayln x)
  (display x)
  (newline))

 (define (lock-buttons)
  (call-with-output-file fifoOut write "{\"type\":\"lock\"}"))

(define (unlock-buttons)
  (call-with-output-file fifoOut write  "{\"type\":\"unlock\"}"))

(define-syntax lock
  (syntax-rules ()
    ((_ body ...)
      (begin (lock-buttons)
        body ...
        (unlock-buttons)))))





