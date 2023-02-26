#include<stdio.h>

// This Code is Writen By Priyanshu Gour

int main(){

    int x ;
    printf("Enter number to print reverse table :  ");
    scanf("%d",&x);

    for(int i = 10 ; 1 <= i ; i-- ){
        printf("%d * %d = %d\n",x,i,i*x);
    }

    return 0 ;
}