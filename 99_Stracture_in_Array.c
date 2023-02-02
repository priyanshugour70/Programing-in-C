#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int rollno ;
    float cgpa ;
};

int main(){

    struct student std[10];
    
    std[0].rollno = 1221 ;
    std[0].cgpa = 9.8 ;
    strcpy(std[0].name , "Priyanshu Gour");

    printf("Roll no is : %d\n",std[0].rollno);
    printf("CGPA is : %f\n",std[0].cgpa);
    printf("Name is : %s\n",std[0].name);

}