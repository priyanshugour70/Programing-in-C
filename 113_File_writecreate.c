#include<stdio.h>

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