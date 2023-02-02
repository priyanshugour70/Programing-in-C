#include<stdio.h>

int main(){

    FILE *add ;
    add = fopen("file.txt","r");
    fclose(add);

    return 0 ;
}