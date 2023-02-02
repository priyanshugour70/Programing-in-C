#include<stdio.h>

int main(){

    int a ;

    printf("Enter number to find table :  ");
    scanf("%d",&a);

    for(int i = 1 ; i <= 10 ; i++){
        printf("\n%d * %d = %d",i,a,a*i);
    }

    return 0 ;
}