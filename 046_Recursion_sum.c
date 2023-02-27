#include<stdio.h>

// This Code is Writen By Priyanshu Gour

int sum(int i);

int main(){

    printf("Sum of your number is  :  %d",sum(5));

    return 0 ;
}

int sum(int i){

    if(i==1){
        return 1 ;
    }
    int ithsum = sum(i-1);
    int isum = ithsum + i ;
    return isum ;

}