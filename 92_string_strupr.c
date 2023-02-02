#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    gets(str);
    puts(str);
    puts(strupr(str));

    return 0 ;
}