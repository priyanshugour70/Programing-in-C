#include<stdio.h>

// This Code is Writen By Priyanshu Gour

int main(){

    for(int i = 5 ; 50 >= i ; i++){
        if(i % 2 == 0){
            continue ;
        }
        printf("%d\n",i);
    }

    return 0 ;
}