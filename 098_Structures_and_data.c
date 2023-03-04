#include<stdio.h>
#include<string.h>

// This Code is Written By Priyanshu Gour

struct student {
    int rollno ;
    float cgpa ;
    char name[100];
};

int main(){
    struct student s1 ;
    s1.cgpa = 9.8 ;
    s1.rollno = 1221 ;
    strcpy(s1.name,"Priyanshu Gour");
    printf("Roll No is : %d\n",s1.rollno);
    printf("CGPA  is : %.2f\n",s1.cgpa);
    printf("Name is : %s\n",s1.name);

    printf("\n");

    struct student s2 ;
    s2.cgpa = 8.6 ;
    s2.rollno = 1238 ;
    strcpy(s2.name,"Vaibhav Rajput");
    printf("Roll No is : %d\n",s2.rollno);
    printf("CGPA is : %.2f\n",s2.cgpa);
    printf("Name is : %s\n",s2.name);

    printf("\n");
    
    struct student s3 ;
    s3.cgpa = 7.6 ;
    s3.rollno = 1220 ;
    strcpy(s3.name,"Pradeep Patel");
    printf("Roll No is : %d\n",s3.rollno);
    printf("CGPA is : %.2f\n",s3.cgpa);
    printf("Name is : %s\n",s3.name);

    printf("\n");

}