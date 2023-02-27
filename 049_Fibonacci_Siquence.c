#include <stdio.h>

// This Code is Writen By Priyanshu Gour

int Fibonacci(int n);

int main(){

    printf("\nFibonacci Number is  :  %d",Fibonacci(8));

    return 0 ;
}

int Fibonacci(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1 ;
    }
    int feb1 = Fibonacci(n-1);
    int feb2 = Fibonacci(n-2);
    int lastfeb = feb1 + feb2 ;
    // printf("\nFibonacci of %d is :  %d",n,lastfeb);
    return lastfeb ;
}