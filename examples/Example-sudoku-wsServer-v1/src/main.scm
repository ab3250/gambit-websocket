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







;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(ws_start)



