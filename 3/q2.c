#include <stdio.h>
#include <error.h>
#include <stdlib.h>
 
void main(int argc, char *argv[])
{
    FILE *fp;
 
    if (argc == 1) {
        printf("File name Missing.Please enter a filename in command line argument\n");
        exit(0);
    }
 
    fp = fopen(argv[1], "r");
 
    if (fp == NULL) {
        perror("File Open error");
        exit(0);
    }
    printf("File successfully opened\n");
}
