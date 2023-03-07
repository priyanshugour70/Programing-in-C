#include<stdio.h>
#include<stdlib.h>

// This Code is Written By Priyanshu Gour

int main(){

    float *ptr ;
    ptr = (float*) malloc(5 * sizeof(float));

    ptr[0] = 2.5 ;
    ptr[1] = 5.4 ;
    ptr[2] = 5.4 ;
    ptr[3] = 7.3 ;
    ptr[4] = 9.3 ;

    for(int i = 0 ; i < 5 ; i++){

        printf("%.2f\n",ptr[i]);
    }

    return 0 ;
}