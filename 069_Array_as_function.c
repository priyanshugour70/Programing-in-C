#include<stdio.h>

// This Code is Written By Priyanshu Gour

void arrayinfunction(int arr[],int n);

int main(){

    int arr[] = {1,2,3,4,5,6};
    arrayinfunction(arr,6);

    return 0 ;
}

void arrayinfunction(int arr[],int n){
//void arrayinfunction(int *arr,int n){

    for(int i = 0 ; i < n ; i++){
        printf("%d\t",arr[i]);
    }
}