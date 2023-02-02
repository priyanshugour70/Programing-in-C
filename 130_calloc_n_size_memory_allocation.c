#include<stdio.h>
#include<stdlib.h>

int main(){

    int n ;
    int *ptr ;

    printf("Enter number to how many plce of memory :  ");
    scanf("%d",&n);

    ptr = (int*) calloc(n,sizeof(int));

    int rdm = 0 ;

    for(int i = 0 ; i < n ; i++){
        printf("Enter number to print the location %d : ",i);
        scanf("%d",&rdm);
        ptr[i] = rdm ;
    }
    printf("\n\n");
    int value ;
    for(int i = 0; i < n ; i++){
        value = ptr[i];
        printf("value of ptr is : %d\n",value);
    }
    return 0; 
}