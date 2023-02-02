#include<stdio.h>

int arraynumber(int number[],int len);

int main(){

    int number[] = {1,2,3,4,5,6,7,8,9,10};
    int arrlen = 10 ;
    printf("Total %d odd number in Array . ",arraynumber(number,arrlen));
}

int arraynumber(int number[],int len){
    int count = 0 ;
    for (int i = 0 ; i < len ; i++){
        if(number[i] % 2 != 0){
            count++;
        }
    }
    return count ;
}