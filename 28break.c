#include<stdio.h>

int main(){

    for(int i = 1 ; 10 >= i ; i++){

        if(i==5){
            break ;
        }
        printf("%d\n",i);
    }

    return 0;
}