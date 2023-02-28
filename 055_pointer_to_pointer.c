#include <stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    float age = 18 ; 
    float *ptr = &age ;
    float **pptr = &ptr ;

    printf("%.1f",**pptr);

    return 0 ;
}