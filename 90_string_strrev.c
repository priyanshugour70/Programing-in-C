#include<string.h>
#include<stdio.h>

int main(){

    char str[100];

    gets(str);
    puts(str);
    
    puts(strrev(str));

    return 0 ;
}