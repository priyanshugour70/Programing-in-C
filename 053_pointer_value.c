#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    int age = 49 ;
    int *ptr = &age ;

    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));

    return 0 ;
}