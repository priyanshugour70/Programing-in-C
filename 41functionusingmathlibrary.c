#include <stdio.h>
#include <math.h>

void square(float i);

int main(){

    float length ;
    printf("Enter the length of your square  :  ");
    scanf("%f",&length);

    square(length);

    return 0 ;
}

void square(float i){
    printf("\nYour area of square is  :  %.1f", pow(i,2));
}