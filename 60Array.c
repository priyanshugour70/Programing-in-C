#include<stdio.h>

int main(){

    int marks[3] ;

    printf("Enter your physics marks :  ");
    scanf("%d",&marks[0]);

    printf("\nEnter your chemistry marks :  ");
    scanf("%d",&marks[1]);

    printf("\nEnter your maths marks :  ");
    scanf("%d",&marks[2]);

    printf("\nyour marks is : Physics : %d Chemistry : %d Maths : %d",marks[0],marks[1],marks[2]);

    return 0 ;
}