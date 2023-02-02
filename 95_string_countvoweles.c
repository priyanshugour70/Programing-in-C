#include<stdio.h>
#include<string.h>

void vowele(char str[]);

int main(){

    char str[100];
    gets(str);
    vowele(str);

    return 0 ;
}

void vowele(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0';i++){
        if(str[i]=='a' ||str[i]=='A' ||str[i]=='e' ||str[i]=='E' ||str[i]=='i' ||str[i]=='I' ||str[i]=='o' ||str[i]=='O' ||str[i]=='u' ||str[i]=='U'){
            count++;
        }
    }
    printf("%d Voweles in this string",count);
}