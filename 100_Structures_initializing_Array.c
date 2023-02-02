#include<stdio.h>
#include<string.h>

struct student {
    int rollno ;
    float cgpa ;
    char name[100];
};

int main(){

    struct student s1 = {1221,9.8,"Priyanshu Gour"};

    printf("Roll no is : %d\n",s1.rollno);
    printf("CGPA is : %f\n",s1.cgpa);
    printf("Name is : %s\n",s1.name);
    return 0 ;
}