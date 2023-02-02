#include<stdio.h>

void printname(char arr[]);

int main(){

    char firstname [] = "Priyanshu";
    char lastname [] = "Gour";

    printname(firstname);
    printname(lastname);
}

void printname(char arr[]){

    for(int i = 0 ; arr[i] != '\0'; i++){
        printf("%c",arr[i]);  
    }
    printf("\n");
}