(c-declare 
#<<c-declare-end
#include "ws.h"
void ws_start(void);
c-declare-end
)

(import
  (scheme base)
  (scheme write)
  (gambit))
  (include "wslib.sld")

(define  ws_sendframe_txt (c-lambda (int char-string bool) int "ws_sendframe_txt"))

(define ws_start (c-lambda () void "ws_start" ))

(c-define (onmessage fd msg size type) (int char-string unsigned-int64 int) void  "onmessage" "extern"
  (cond 
    ((string=? msg "button1")(solve (vector-copy grid1)))
    ((string=? msg "button2")(solve (vector-copy grid2)))
    ((string=? msg "button3")(solve (vector-copy grid3)))
    ((string=? msg "button4")(ws_sendframe_txt gblFd  (grid->JSONString grid1) #f))
    ((string=? msg "button5")(ws_sendframe_txt gblFd  (grid->JSONString grid2) #f))
    ((string=? msg "button6")(ws_sendframe_txt gblFd  (grid->JSONString grid3) #f))))

(c-define (onopen fd) (int) void "onopen" "extern"
           (set! gblFd fd)
           (displayln (list 'opened fd )))

(c-define (onclose fd) (int) void "onclose" "extern"
            (set! gblFd 1)    
            (displayln (list 'closed fd)))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(define gblFd 1)



; (define (list-set lst idx val)
;   (if (null? lst)
;     lst
;     (cons
;       (if (zero? idx)
;         val
;         (car lst))
;       (list-set (cdr lst) (- idx 1) val))))

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

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define (solve grid)
  (let/ec return
    (nested-loop row 0 8 col 0 8
        (if (=(vector-ref grid (row_col->cell row col)) 0)
          (let num-loop ((num 1))                             
            (if (not (= 10 num))
              (begin            
                (if (possible? row col num grid)
                  (begin
                    (vector-set! grid (row_col->cell row col) num)                    
                    (ws_sendframe_txt gblFd (grid->JSONString grid) false)
                    (solve grid)
                    (when (no-zeros-left? grid) (return))
                    (vector-set! grid (row_col->cell row col) 0)))
                (num-loop (+ 1 num)))
              (return)))))))

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

 (define (get_row_cells row)
  (let ((rows #(
    #(0 1 2 3 4 5 6 7 8)
    #(9 10 11 12 13 14 15 16 17)
    #(18 19 20 21 22 23 24 25 26)
    #(27 28 29 30 31 32 33 34 35)
    #(36 37 38 39 40 41 42 43 44)
    #(45 46 47 48 49 50 51 52 53)
    #(54 55 56 57 58 59 60 61 62)
    #(63 64 65 66 67 68 69 70 71)
    #(72 73 74 75 76 77 78 79 80))))
    (vector-ref rows row)))

(define (get_col_cells col)
  (let ((cols #(
    #(0 9 18 27 36 45 54 63 72)
    #(1 10 19 28 37 46 55 64 73)
    #(2 11 20 29 38 47 56 65 74)
    #(3 12 21 30 39 48 57 66 75)
    #(4 13 22 31 40 49 58 67 76)
    #(5 14 23 32 41 50 59 68 77)
    #(6 15 24 33 42 51 60 69 78)
    #(7 16 25 34 43 52 61 70 79)
    #(8 17 26 35 44 53 62 71 80))))
    (vector-ref cols col)))


(define (get_box_cells row col) 
      (cond 
        ((is_between_inc? row 0 2)
          (cond 
            ((is_between_inc? col 0 2) #(0 1 2 9 10 11 18 19 20))
            ((is_between_inc? col 3 5) #(3 4 5 12 13 14 21 22 23))
            ((is_between_inc? col 6 8) #(6 7 8 15 16 17 24 25 26))))
        ((is_between_inc? row 3 5)
          (cond
            ((is_between_inc? col 0 2) #(27 28 29 36 37 38 45 46 47))
            ((is_between_inc? col 3 5) #(30 31 32 39 40 41 48 49 50))
            ((is_between_inc? col 6 8) #(33 34 35 42 43 44 51 52 53))))      
        ((is_between_inc? row 6 8)
          (cond 
            ((is_between_inc? col 0 2) #(54 55 56 63 64 65 72 73 74))
            ((is_between_inc? col 3 5) #(57 58 59 66 67 68 75 76 77))
            ((is_between_inc? col 6 8) #(60 61 62 69 70 71 78 79 80))))))

(define (is_between_inc? val bot top)
  (and (< val (+ top 1))(> val (- bot 1))))

(define (print-grid grid)
    (newline)
    (for 0 8 (lambda(row)
      (for 0 8 (lambda(col)
        (display (vector-ref grid (row_col->cell row col)))))
        (newline))))

(define (row_col->cell row col) 
    (+ (* row 9) col))

(define (possible? row col num grid)
  (and (check (get_row_cells row) num grid)
       (check (get_col_cells col) num grid)
       (check (get_box_cells row col) num grid)))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(ws_start)



