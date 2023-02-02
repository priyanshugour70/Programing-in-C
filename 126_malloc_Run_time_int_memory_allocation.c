#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;

    // In the term or (5 * sizeof (int)) then memory multply by 5 . in this case.
    ptr = (int*) malloc(5 * sizeof(int));

    ptr[0] = 1 ;
    ptr[1] = 2 ;
    ptr[2] = 3 ;
    ptr[3] = 4 ;
    ptr[4] = 5 ;

    for(int i = 0 ; i < 5 ; i++){
        printf("%d\n",ptr[i]);
    }

    return 0 ;
}