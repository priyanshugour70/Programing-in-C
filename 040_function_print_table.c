#include<stdio.h>

// This Code is Writen By Priyanshu Gour

void printtable(int a);

int main(){

    int a ;
    printf("Enter number to print table :  ");
    scanf("%d",&a);
    printtable(a);
}

void printtable(int a){
    for(int i = 1 ; 10 >= i ; i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
}