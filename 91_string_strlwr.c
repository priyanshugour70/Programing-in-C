#include<stdio.h>
#include<string.h>

int main(){

    char str[100];

    gets(str);
    puts(str);
    puts(strlwr(str));

    return 0 ;
}