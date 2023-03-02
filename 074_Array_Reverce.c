#include<stdio.h>

// This Code is Written By Priyanshu Gour

void revercearray(int rev[],int s);

int main(){
    int rev[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    revercearray(rev,size);
}

void revercearray(int rev[],int n){

    for(int i = 0 ; i < n/2 ; i++){
        int first = rev[i];
        int last = rev[n-i-1];
        rev[i] = last ;
        rev[n-i-1] = first;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d\t",rev[i]);
    }
}