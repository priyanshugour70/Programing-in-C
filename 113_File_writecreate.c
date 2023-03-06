#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *fyl ;

    fyl = fopen("file1.txt","w");

    if(fyl==NULL){
        printf("Your file Does not exist. ");
    }else{
        fclose(fyl);
    }

    return 0 ;
}