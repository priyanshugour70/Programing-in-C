#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *fyl ;

    fyl = fopen("newfile.txt","r");

    if(fyl==NULL){
        printf("Your file Does not exist. ");
    }else{
        fclose(fyl);
    }

    return 0 ;
}