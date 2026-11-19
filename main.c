#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024
#define MAX_LINE_LEN 1024

int main(void){
    char cmd[MAX_LINE_LEN];


    while(1){
        if (!fgets(cmd, MAX_LINE_LEN, stdin)) break;
        puts(cmd);
    }


    
    return 0;
}