#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("sum.txt","r");

    int a ;
    fscanf(fptr,"%d",&a);

    int b ; 
    fscanf(fptr,"%d",&b);
    fclose(fptr);

    FILE *ptr ;
    ptr = fopen("sum.txt","w");

    fprintf(ptr,"%d",a+b);

    fclose(ptr);
    
    return 0 ;
}