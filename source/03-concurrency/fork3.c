/*
 * Filename: fork3.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void err_sys(char *mess) { perror(mess); exit(1); }

int main(int argc, char *argv[]) {
    int pid, ppid;
    int i, top;

    /* Check input arguments */
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <value>\n", argv[0]);
        exit(1);
    }

    top = atoi(argv[1]);

    fprintf(stdout, "My PID is %d, my parent PID is %d\n", (int)getpid(), (int)getppid());   
    
    for (i = 0; i < top; i++) {
        fprintf(stdout, "Value: %d\t", i);
    }

    fprintf(stdout, "\n");

    /* Wait forever */
    while(1);

    exit(0);
}
