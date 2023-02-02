#include<stdio.h>
#include<string.h>

void passwordsalting(char new[]);

int main(){

    char password[100];
    scanf("%s",password);

    passwordsalting(password);

    return 0 ;
}

void passwordsalting(char new[]){

    char salt[] = "123";
    char newpass[200];

    strcpy(newpass,new);
    strcat(newpass,salt);
    puts(newpass);
}