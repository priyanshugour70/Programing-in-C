#include<stdio.h>

// This Code is Written By Priyanshu Gour

void twotable(int arr[][10],int n,int num);

int main(){

    int arr[2][10];
    twotable(arr,0,11);
    twotable(arr,1,22);

    for(int i = 0 ; i < 10 ; i++){
        printf("%d\t",arr[0][i]);
    }
    printf("\n");
    for(int i = 0 ; i < 10 ; i++){
        printf("%d\t",arr[1][i]);
    }


    return 0 ;
}

void twotable(int arr[][10], int n , int num){
    for(int i = 0 ; i < 10 ; i++){
        arr[n][i] = num*(i+1) ;
    }
}