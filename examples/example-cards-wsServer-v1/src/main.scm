(c-declare #<<c-declare-end
  #include "ws.h"
  #include <stdlib.h>
  #include <time.h>
  #include <signal.h>

//;c function definition
void timer_callback(int);
int timer_set(void);
int timer_init(void);
void ws_start(void);

//;c global variables
static timer_t gTimerid;
c-declare-end
)

;(c-define-type sigh "__sighandler_t")
;(c-define-type timevalue "___SCMOBJ")
;(c-define-type timespec (struct "itimerspec"))

(c-define (timer_callback signum) (int) void "timer_callback" "extern"   
  ;(timer_delete)
  (ws_sendframe_txt gblFd (makeJSONString (knuth-shuffle deck)) false)
 ; (timer_init)
  ;(timer_set)

          
          )

(define timer_init (c-lambda () void
#<<c-lambda-end
  signal(SIGALRM, timer_callback);
  timer_create (CLOCK_REALTIME, NULL, &gTimerid);
c-lambda-end
))

(define timer_set (c-lambda () int #<<c-lambda-end
  struct itimerspec value; 
  value.it_value.tv_sec = 5;    
  value.it_value.tv_nsec = 0;   
  value.it_interval.tv_sec = 0;
  value.it_interval.tv_nsec = 9000000;  
  timer_settime (gTimerid, 0, &value, NULL);  
c-lambda-end
))

; (define makeTimeval (c-lambda () timespec
; #<<c-lambda-end
;   struct itimerspec value; 
;   value.it_value.tv_sec = 10;    
;   value.it_value.tv_nsec = 0;   
;   value.it_interval.tv_sec = 4;
;   value.it_interval.tv_nsec = 0;  
;   ___return(value);  
; c-lambda-end
; ))

(define gblFd -1)
(define gblTmr -1)
(define  ws_sendframe_txt (c-lambda (int char-string bool) int "ws_sendframe_txt"))
(define  ws_get_state (c-lambda (int) int "ws_get_state"));

(define ws_start (c-lambda () void "ws_start" ))
(c-define (onmessage fd msg size type) (int char-string unsigned-int64 int) void  "onmessage" "extern"
  //;(ws_sendframe_txt gblFd (makeJSONString (knuth-shuffle deck)) false)  
  (displayln (list 'frame 'recieved 'client fd))
  )
(c-define (onopen fd) (int) void "onopen" "extern"
           (set! gblFd fd)
           (displayln (list 'opened fd )))

(c-define (onclose fd) (int) void "onclose" "extern"
            (set! gblFd 1)    
            (displayln (list 'closed fd)))
(import
  (scheme base)
  (scheme write))

(define (makeJSONString deck)
    (let loop1 ((idx 0)(end (length deck))(str "["))  
      (if (not(equal? idx end))
          (loop1 
              (+ idx 1) 
              end 
              (string-append str "\"" (list-ref deck idx) "\""  (if(not(equal? idx (- end 1)))"," "]") " "))
              str)))

(define (displayln x)
  (display x)
  (newline))

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

(define deck (list "0000" "0001" "0002" "0003" "0004" "0005" "0006" "0007" "0008" "0009" "0010" "0011" "0012"
                   "0100" "0101" "0102" "0103" "0104" "0105" "0106" "0107" "0108" "0109" "0110" "0111" "0112"
                   "0200" "0201" "0202" "0203" "0204" "0205" "0206" "0207" "0208" "0209" "0210" "0211" "0212"
                   "0300" "0301" "0302" "0303" "0304" "0305" "0306" "0307" "0308" "0309" "0310" "0311" "0312"))

(timer_init)
(timer_set)
(ws_start)
