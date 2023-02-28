#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){
    int aadhar[5];

    //input 
    int *ptr = &aadhar[0];
    for(int i = 0 ; i < 5 ; i++){
        printf("%d index no : ",i);
        scanf("%d",(ptr+i));
        //scanf("%d",&aadhar[i]);
    }
    //output
    for(int i = 0 ; i < 5; i++){
        printf("\n%d index no value is : %d",i,(*ptr+i));
        //printf("\n%d index no value is : %d",i,aadhar[i]);
    }
    return 0 ;
}