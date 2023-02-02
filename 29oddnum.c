#include<stdio.h>

int main(){

    int a ;

    do{
        printf("Enter number :  ");
        scanf("%d",&a);

        if(a%2!=0){
            printf("OPPS...!  No ");
            break;
        }
    }while(1);

    return 0 ;
}