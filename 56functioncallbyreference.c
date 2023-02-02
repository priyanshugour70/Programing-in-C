#include<stdio.h>

void square(int *n );

int main(){

    int number = 25 ;
    square(&number);

    printf("Number is :  %d\n",number);

    return 0 ;
}
 
void square(int *n ){

    *n = *n * *n ;
    printf("Area of square is :  %d\n",*n);
}