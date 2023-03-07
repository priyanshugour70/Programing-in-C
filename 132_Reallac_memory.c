#include<stdio.h>
#include<stdlib.h>

// This Code is Written By Priyanshu Gour

int main(){

    int *ptr ;
    ptr = (int*) calloc(5,sizeof(int));

    printf("Enter number (5) : ");
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d",&ptr[i]);
    }

    printf("\n");

    ptr = (int*) realloc(ptr,8);

    printf("Enter number (8) : ");
    for(int i = 0 ; i < 8 ; i++){

        scanf("%d",&ptr[i]);
    }

    printf("\n");

    for(int i = 0 ; i < 8 ; i++){
        printf("%d no value is : %d\n",i+1,ptr[i]);
    }

    return 0 ;
}