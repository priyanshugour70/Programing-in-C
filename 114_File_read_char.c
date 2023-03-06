#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *ptr ;
    ptr = fopen("file.txt","r");
    char ch;

    fscanf(ptr,"%c",&ch);
    printf("Character is :  %c\n",ch);
    
    fscanf(ptr,"%c",&ch);
    printf("Character is :  %c\n",ch);
    
    fscanf(ptr,"%c",&ch);
    printf("Character is :  %c\n",ch);
    
    fscanf(ptr,"%c",&ch);
    printf("Character is :  %c\n",ch);
    
    fscanf(ptr,"%c",&ch);
    printf("Character is :  %c\n",ch);

    fclose(ptr);
    return 0 ;
}