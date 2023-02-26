#include <stdio.h>

// This Code is Writen By Priyanshu Gour

int sum(int a, int b );

int main(){
    int a,b;
    printf("Enter first number :  ");
    scanf("%d",&a);
    printf("Enter second number :  ");
    scanf("%d",&b);

    printf("%d",sum(a,b));
}

int sum(int a, int b){
    return a+b ;
}