#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *fptr ;

    fptr = fopen("fileint.txt","r");
    int num ;

    fscanf(fptr,"%d",&num);
    printf("Number is :  %d\n",num);
    
    fscanf(fptr,"%d",&num);
    printf("Number is :  %d\n",num);
    
    fscanf(fptr,"%d",&num);
    printf("Number is :  %d\n",num);
    
    fscanf(fptr,"%d",&num);
    printf("Number is :  %d\n",num);



    return 0 ;
}