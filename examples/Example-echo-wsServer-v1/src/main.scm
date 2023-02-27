(c-declare #<<c-declare-end
  #include "ws.h"
  void ws_start(void);
c-declare-end
)

(import (scheme base)
        (scheme write))

(define  ws_sendframe_txt (c-lambda (int char-string bool) int "ws_sendframe_txt"))

(define ws_start (c-lambda () void "ws_start" ))

(c-define (onopen fd) (int) void "onopen" "extern"
           (set! gblFd fd)
           (display (list 'opened fd))
           (newline))

(c-define (onclose fd) (int) void "onclose" "extern"
            (set! gblFd 1)    
            (display (list 'closed fd))
            (newline))


(c-define (onmessage fd msg size type) (int char-string unsigned-int64 int) void  "onmessage" "extern"
  (ws_sendframe_txt gblFd msg #f)) ;;echo
    
  
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(define gblFd 1)
 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(ws_start)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
 

