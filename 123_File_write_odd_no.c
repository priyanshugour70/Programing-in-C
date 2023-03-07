#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *ptr ;
    ptr = fopen("file1.txt","w");

    int odd ;
    int n ;

    printf("Enter Nth number to print  :  ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){
        if(i % 2 != 0){
            odd = i ;
            fprintf(ptr,"%d\t",odd);
            printf("%d\t",odd);
        }
    }
    fclose(ptr);

    return 0 ;

}