#include<stdio.h>

// This Code is Written By Priyanshu Gour

void swap(int *j ,int *i);

int main(){

    int a = 5 , b = 10 ;

    printf("value or a & b is %d & %d\n", a , b);
    swap(&a,&b);
    printf("value or a & b is %d & %d\n", a , b);

    return 0 ;
}

void swap(int *j, int *i){

    int x = *j ;
    *j = *i ;
    *i = x ;
}