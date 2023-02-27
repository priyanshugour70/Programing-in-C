#include<stdio.h>

// This Code is Writen By Priyanshu Gour

int factorial(int n);

int main(){

    printf("Factorial of your number is  :  %d", factorial(5));

    return 0 ;
}

int factorial(int n){

    if(n==1){
        return 1 ;
    }
    int factofm1 = factorial(n-1);
    int fact = factofm1 * n ;
    return fact ;
}