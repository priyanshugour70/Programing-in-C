#include<stdio.h>

// This Code is Written By Priyanshu Gour

int main(){

    FILE *fptr ;
    fptr = fopen("file1.txt","r");

    int n ;

    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
      
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
      
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
      
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
      
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
      
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
      
    fclose(fptr);

    return 0 ;
}