#include<stdio.h>

// This Code is Writen By Priyanshu Gour

void calculategst(float i);

int main(){

    float value = 100.0 ;
    calculategst(value);
    printf("\nThe orignal price is :  %f",value);
}

void calculategst(float i){
    i = i * 1.18 ;
    printf("Include gst the price is :  %f",i);
}