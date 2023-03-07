#include<stdio.h>
#include<stdlib.h>

// This Code is Written By Priyanshu Gour


int main(){

    int *ptr; 
    ptr = (int*) calloc(5,sizeof(int));

    ptr[0] = 1 ;
    ptr[1] = 3 ;
    ptr[2] = 5 ;
    ptr[3] = 7 ;
    ptr[4] = 9 ;

    printf("\n");

    for(int i = 0 ; i < 5 ; i++){
        printf("%d no vlaue is : %d\n",i+1,ptr[i]);
    }

    printf("\n\n");

    // this is the fuction to reaccolate the memory in this program.
    ptr = (int*) realloc(ptr,6);
    
    ptr[0] = 2 ;
    ptr[1] = 4 ;
    ptr[2] = 6 ;
    ptr[3] = 8 ;
    ptr[4] = 10 ;
    ptr[5] = 12 ;

    for(int i = 0 ; i < 6 ; i++){
        printf("value of %d this no is :  %d\n", i+1, ptr[i]);
    }

    free(ptr);

    return 0 ;
}