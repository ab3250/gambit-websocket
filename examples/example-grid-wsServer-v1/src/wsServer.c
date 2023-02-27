#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "gambit.h"
#include <stdint.h>
#include <unistd.h>
#include "ws.h"

/* Forward declarations. */
//void onmessage(int fd,const unsigned char *msg, uint64_t size, int type);
extern void onmessage(int fd,const unsigned char *msg, uint64_t size, int type);
extern void onopen(int fd);
extern void onclose(int fd);
extern void ws_start(void);
//extern int ws_sendframe_txt(int fd, const char *msg, bool broadcast);

void ws_start (void){
    struct ws_events evs;
    evs.onopen    = &onopen;
    evs.onclose   = &onclose;
    evs.onmessage = &onmessage;
    usleep(500000);
    setbuf(stdout, NULL); 
    printf("Server Initialized!\n");  
    ws_socket(&evs, 8080, 0);
    printf("debug3\n");
    return;
}

