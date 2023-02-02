#include <stdio.h>

int main(){

    float age = 18 ; 
    float *ptr = &age ;
    float **pptr = &ptr ;

    printf("%.1f",**pptr);

    return 0 ;
}