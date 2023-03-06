#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *add ;
    add = fopen("file.txt","r");
    fclose(add);

    return 0 ;
}