#include<stdio.h>
#include<string.h>

// This Code is Written By Priyanshu Gour

struct complex{
    int real ;
    int img ;
};

int main(){

    struct complex number = {5,10};

    struct complex *ptr = &number ;

    printf("real no is : %d\n",ptr->real);
    printf("Img no is : %d\n",ptr->img);

    return 0 ;
}