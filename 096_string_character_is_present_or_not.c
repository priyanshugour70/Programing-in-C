#include<stdio.h>
#include<stdio.h>

// This Code is Written By Priyanshu Gour

void checkpresentornot(char str[],char ch);

int main(){

    char str[100];
    char ch;

    gets(str);
    scanf("%c",&ch);
    
    checkpresentornot(str,ch);
}

void checkpresentornot(char str[],char ch){

    for(int i = 0 ; str[i] != '\n' ; i++){
        if(str[i] == ch){
            printf("Character is present .. ! ");
            return ;
        }
    }
    printf("Character is not present in the string..!");
}