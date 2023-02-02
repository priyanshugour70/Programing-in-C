#include<stdio.h>

int main(){

    int sum = 0 ;
    int a ;
    
    printf("Enter number :  ");
    scanf("%d",&a);

    for(int i = 1,j = a ; a >= i , j >= 1 ; i++,j--){
        sum += i ;
        printf("%d\n",j);
    }
    printf("%d",sum);

    return 0 ;
}