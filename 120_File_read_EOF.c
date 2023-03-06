#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *fptr ;
    fptr = fopen("file.txt","r");

    char ch;
    ch = fgetc(fptr);

    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0 ;
}