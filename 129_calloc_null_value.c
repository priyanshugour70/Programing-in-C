#include<stdio.h>
#include<stdlib.h>

// This Code is Written By Priyanshu Gour

int main(){

    int *ptr;

    // calloc is always fill zero in new place or memory.
    
    ptr = (int*) calloc(5,sizeof(int));




    for(int i = 1 ; i <= 5 ; i++){

        printf("%d\n",ptr[i]);
    }

    return 0 ;
}