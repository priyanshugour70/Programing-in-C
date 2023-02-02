#include<stdio.h>

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