#include<stdio.h>

// This Code is Written By Priyanshu Gour

void prosumdiv(int J,int i, int *sum, int *pro, int *avg);

int main(){

    int a = 4 , b = 8 ;
    int sum, pro, avg ;
    prosumdiv(a,b, &sum, &pro, &avg);

    printf("Sum of two a & b is :  %d\n",sum);
    printf("Product of two a & b is :  %d\n",pro);
    printf("Average of two a & b is :  %d\n",avg);


    return 0 ;
}

void prosumdiv(int j,int i, int *sum, int *pro, int *avg){

    *sum = j+i ;
    *pro = j*i ;
    *avg = (j+i)/2;

}