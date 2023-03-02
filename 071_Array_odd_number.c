#include<stdio.h>

// This Code is Written By Priyanshu Gour

void arraynumber(int number[],int len);

int main(){

    int number[] = {1,2,3,4,5,6,7,8,9,10};
    int arrlen = 10 ;
    arraynumber(number,arrlen);
}

void arraynumber(int number[],int len){
    for (int i = 0 ; i < len ; i++){
        if(number[i] % 2 != 0){
            printf("%d\t",number[i]);
        }
    }
}