#include<stdio.h>

float converttemp(float i);

int main(){

    printf("Your temperatre converted into far. is :  %.1f",converttemp(36.8));

    return 0 ;
}

float converttemp(float i){

    float converted = i *(9.0/5.0) + 32 ;
    return converted ;
}