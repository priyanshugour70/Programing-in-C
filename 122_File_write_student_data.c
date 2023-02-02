#include<stdio.h>

int main(){

    FILE *fptr ;
    fptr = fopen("studentdata.txt","w");

    char name[50];
    int rollno ;
    float cgpa ;

    printf("Enter name : ");
    scanf("%s",name );
    printf("Enter rollno : ");
    scanf("%d",&rollno);
    printf("Enter CGPA : ");
    scanf("%f",&cgpa);

    fprintf(fptr,"Student name : %s\n",name);
    fprintf(fptr,"Student rollno : %d\n",rollno);
    fprintf(fptr,"Student cgpa : %.1f\n",cgpa);

    printf("\n");

    fclose(fptr);

    return 0 ;
}