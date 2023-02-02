#include<stdio.h>

void namaste();
void bonjour();

int main(){

    char ch ;
    printf("Enter I if you are indian nither F  :  ");
    scanf("%c",&ch);


    if(ch=='i'){
        namaste();
    }else if(ch=='f'){
        bonjour();
    }else{
        printf("Your choice is wrong ..!\n");
    }

    return 0 ;
}

void namaste(){
    printf("\nNamaste...!\n");
}
void bonjour(){
    printf("\nBonjour...!");
}