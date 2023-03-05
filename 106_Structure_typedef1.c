#include<stdio.h>
#include<string.h>

// This Code is Written By Priyanshu Gour

typedef struct BCACloudComputing{
    int rollno ;
    float cgpa ;
    char name[100];
} cc ;

int main(){
    
    cc s1 = {1221,9.6,"Priyanshu Gour"};
    cc *ptr = &s1 ;

    // s1.rollno = 1221 ;
    // s1.cgpa = 8.0 ;
    // strcpy(s1.name, "Priyanshu Gour");

    printf("Roll no is : %d\n",ptr->rollno);
    printf("CGPA is : %.3f\n",ptr->cgpa);
    printf("Name is %s\n",ptr->name);


    return 0 ;
}