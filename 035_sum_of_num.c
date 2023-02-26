#include <stdio.h>

// This Code is Writen By Priyanshu Gour

int main(){

    int j , k ;
    int sum = 0 ;

    printf("Enter staring & ending number  :  ");
    scanf("%d%d",&j,&k);

    for(int i = j ; k >= i ; i++){
        sum += i ;
    }

    printf("Sum of you number  :  %d",sum);

    return 0 ;
}