#include<stdio.h>

int main(){

    FILE *fptr ;
    fptr = fopen("file1.txt","w");

    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'r');
    fprintf(fptr,"%c",'i');
    fprintf(fptr,"%c",'y');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'u');

    fclose(fptr);
    return 0 ;
}