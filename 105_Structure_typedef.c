#include<stdio.h>
#include<string.h>

typedef struct BCACloudComputing{
    int rollno ;
    float cgpa ;
    char name[100];
} cc ;

int main(){
    
    cc s1 ;
    s1.rollno = 1221 ;
    s1.cgpa = 8.0 ;
    strcpy(s1.name, "Priyanshu Gour");

    printf("Roll no is : %d\n",s1.rollno);
    printf("CGPA is : %.3f\n",s1.cgpa);
    printf("Name is %s\n",s1.name);


    return 0 ;
}