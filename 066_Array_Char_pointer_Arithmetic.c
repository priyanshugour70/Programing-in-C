#include <stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    char star = '*' ;
    char *ptr = &star ;

    printf("Ptr is  : %u\n",ptr);
    ptr++;
    printf("Ptr is  : %u\n",ptr);
    ptr--;
    printf("Ptr is  : %u\n",ptr);


    return 0 ;
}