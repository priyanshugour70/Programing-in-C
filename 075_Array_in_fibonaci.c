#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    int n ;

    printf("Enter the number to how many fibonachi print (N>2) :  ");
    scanf("%d",&n);

    int fibonachi[n];

    fibonachi[0] = 0 ;
    fibonachi[1] = 1 ;
    printf("%d\t",fibonachi[0]);
    printf("%d\t",fibonachi[1]);

    for(int i = 2 ; i < n ;i++){
        fibonachi[i] = fibonachi[i-1] + fibonachi[i-2];
        printf("%d\t",fibonachi[i]);
    }

    return 0 ;
}