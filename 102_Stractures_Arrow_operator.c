#include<stdio.h>
#include<string.h>

struct student{
    int rollno ;
    float cgpa ;
    char name[100];
};

int main(){

    struct student s1 = {1221,9.8,"Priyanshu gour"};
    printf("name is : %s\n",s1.name);
    struct student *ptr = &s1 ;
    printf("name is with pointer : %s\n", (*ptr).name);
    printf("name is with arrow ptr->name : %s\n", ptr->name);

    return 0 ;
}