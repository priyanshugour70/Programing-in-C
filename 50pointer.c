#include<stdio.h>

int main(){

    int num = 59 ;
    int *prg = &num ;
    int _num = *prg ;
    printf("%d",*prg);

    return 0 ;
}