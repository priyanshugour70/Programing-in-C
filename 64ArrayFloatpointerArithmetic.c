#include <stdio.h>

int main(){

    float price = 18.6 ;
    float *ptr = &price ;

    printf("Ptr is  : %u\n",ptr);
    ptr++;
    printf("Ptr is  : %u\n",ptr);
    ptr--;
    printf("Ptr is  : %u\n",ptr);


    return 0 ;
}