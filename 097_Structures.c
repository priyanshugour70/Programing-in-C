#include<stdio.h>
#include<string.h>

// This Code is Written By Priyanshu Gour

struct student{
    int rollno ;
    float cgpa ;
    char name[100];
};

int main(){
    struct student priyanshu ;
    priyanshu.cgpa = 9.8 ;
    priyanshu.rollno = 1221 ;
    strcpy(priyanshu.name,"Priyanshu Gour");

    printf("Roll Number is : %d\n",priyanshu.rollno);
    printf("Roll Number is : %f\n",priyanshu.cgpa);
    //prinrf("Roll Number is : %s",priyanshu.name);
    printf("Name is : %s",priyanshu.name);

    return 0 ;
}