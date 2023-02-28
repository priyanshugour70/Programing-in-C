#include <stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    int age = 50 ;
    int *leg = &age ;

    printf("%p\n",&age);
    printf("%p\n",leg);
    printf("%d\n",*leg);
    printf("%u\n",&age);
    printf("%u\n",leg);
    printf("%p\n",&leg);
    printf("%u\n\n",&leg);
    
    printf("%d\n",*(&age));

    return 0 ;
}