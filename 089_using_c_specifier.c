#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    char str[100];
    char ch;

    int i = 0 ;
    while(ch != '\n'){

        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0 ;
}