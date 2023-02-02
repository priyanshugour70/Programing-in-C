#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",*(arr+4));
    /* This case is totaly west because memory location is out of array size .
    printf("%d\n",*(arr+10));
    */

    return 0 ;
}