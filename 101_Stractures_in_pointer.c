#include<stdio.h>
#include<string.h>

// This Code is Written By Priyanshu Gour

struct student {
    int rollno ;
    float cgpa ;
    char name[100];
};

int main(){

    struct student s1 = {1221,9.8,"priyanshu gour"};
    printf("Roll no is : %d\n",s1.rollno);

    struct student *ptr = &s1 ;
    printf("Roll no is : %d\n",(*ptr).rollno);

    return 0 ;
}