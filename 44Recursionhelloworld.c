#include<stdio.h>

void helloworld(int count);

int main(){

    int count = 5 ;
    helloworld(count);

    return 0 ;
}

void helloworld(int count){
    if(count==0){
        return ;
    }
    printf("Hello World... !!\n");
    helloworld(count-1);
}