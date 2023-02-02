#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr ;
    ptr = (int*) calloc(5,sizeof(int));

    for(int i=0 ; i < 5 ; i++){

        printf("%d\n",ptr[i]);
    }
    printf("\n");
     
     // free function use for the two ptr use and free the resource in some litle tym for using free(ptr) function.
    free(ptr);
    
    ptr = (int*) calloc(5 , sizeof(int));

    for(int i = 0 ;i < 5 ; i++){

        printf("%d\n",ptr[i]);
    }

    return 0;
}