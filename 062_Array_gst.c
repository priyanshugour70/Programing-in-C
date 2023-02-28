#include <stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    float price[3];

    printf("Enter Price of your product :  \n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Price 1 : %.1f\n",price[0]*1.18);
    printf("Price 2 : %.1f\n",price[1]*1.18);
    printf("Price 3 : %.1f\n",price[2]*1.18);

    return 0 ;
}
