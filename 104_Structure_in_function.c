#include<stdio.h>
#include<string.h>

struct student {
    int rollno ;
    float cgpa ;
    char name[100];
};

void studentrecord(struct student pg);

int main(){

    struct student s1 = {1221,9.6,"Priyanshu gour"};

    studentrecord(s1);

    printf("Roll no is : %d\n", s1.rollno);

    return 0 ;
}

void studentrecord(struct student pg){
    printf("Roll no is : %d\n", pg.rollno);
    printf("CGPA is : %.2f\n", pg.cgpa);
    printf("Name is : %s\n", pg.name);

    printf("\n");

    pg.rollno = 1234 ;
}