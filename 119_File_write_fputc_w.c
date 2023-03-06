#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *ptr ;
    ptr = fopen("file1.txt","w");

    fputc('P',ptr);
    fputc('r',ptr);
    fputc('i',ptr);
    fputc('y',ptr);
    fputc('a',ptr);
    fputc('n',ptr);
    fputc('s',ptr);
    fputc('h',ptr);
    fputc('u',ptr);

    fclose(ptr);

    return 0 ;
}