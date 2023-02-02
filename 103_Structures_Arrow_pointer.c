#include<stdio.h>
#include<string.h>

struct student {
    int rollno ;
    float cgpa ;
    char name[100];
};

int main(){

    struct student s1 = {1221,9.7,"priyanshu gour"};
    struct student *ptr = &s1 ;

    printf("Name is : %s\n", ptr->name);
    printf("Roll no is : %d\n",ptr->rollno);
    printf("CGPA is : %.2f\n",ptr->cgpa);


    return 0 ;
}