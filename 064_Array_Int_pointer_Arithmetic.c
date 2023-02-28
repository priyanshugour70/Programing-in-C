#include <stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    int age = 18 ;
    int *ptr = &age ;

    printf("Ptr is  : %u\n",ptr);
    ptr++;
    printf("Ptr is  : %u\n",ptr);
    ptr--;
    printf("Ptr is  : %u\n",ptr);


    return 0 ;
}