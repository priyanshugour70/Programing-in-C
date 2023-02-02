#include <stdio.h>

void square(int n);

int main(){

    int number = 5 ;
    square(number);
    printf("Number is :  %d", number);

    return 0 ;
}
// this type of function is known as call by value .
void square(int n){

    n = n*n ;
    printf("Area of Square is  :  %d\n", n);
}