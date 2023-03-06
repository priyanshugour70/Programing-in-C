#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *fptr ;
    fptr = fopen("file.txt","r");
    printf("Character is : %c\n",fgetc(fptr));
    printf("Character is : %c\n",fgetc(fptr));
    printf("Character is : %c\n",fgetc(fptr));
    printf("Character is : %c\n",fgetc(fptr));
    printf("Character is : %c\n",fgetc(fptr));

    fclose(fptr);

    return 0 ;
}