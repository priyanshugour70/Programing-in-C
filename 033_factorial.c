#include<stdio.h>

// This Code is Writen By Priyanshu Gour

int main(){

    int x ;
    int fact = 1 ;
    printf("Enter no to find factorial :  ");
    scanf("%d",&x);

    for(int i = 1 ; i <= x ; i++){

        fact *= i ;
    }
    printf("\n%d",fact);

    return 0 ;
}