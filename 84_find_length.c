#include<stdio.h>

int findlength(char a[]);

int main(){

    char gour[100];
    fgets(gour,100,stdin);

    int length =findlength(gour);

    printf("length of the your input is :  %d",length);


    return 0 ;
}

int findlength(char a[]){
    int count = 0 ;
    for(int i = 0 ;a[i] != '\0';i++){
        if(a[i]=='h'){
            count ++ ;
            
        }
    }
    return count ;
    /*if we print all character 
    return count ++ ;
    */
}