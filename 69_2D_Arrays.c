#include<stdio.h>

int main(){

    // Marks of 2 Student in 3 Stubjects .
    int marks[2][3] ;

    //marks of 1st student.
    marks[0][0] = 97 ;
    marks[0][1] = 95 ;
    marks[0][2] = 96 ;
    
    //marks of 2nd student.
    marks[1][0] = 94 ;
    marks[1][1] = 98 ;
    marks[1][2] = 93 ;

    //printing marks.
    printf("\t%d\n",marks[0][0]);
    printf("\t%d\n",marks[1][0]);
    return 0 ;
}