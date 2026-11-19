#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024 //don't care large files.
#define MAX_LINE_LEN 1024 //the limit of a line.

int mode(char *cmd, char *mode){
    return (strcmp(cmd, mode) == 0);
}


int main(void){
    char cmd[MAX_LINE_LEN]; //the input cmd


    while(1){
        if (!fgets(cmd, MAX_LINE_LEN, stdin)) break; //ignore the unexpected input. 
        cmd[strcspn(cmd, "\r\n")] = 0; //remove \n from cmd.

        if(mode(cmd, "q")) { //quit condition
            break;
        }
        else if(mode(cmd, "a")) {
            //append mode
        }


    }


    
    return 0;
}