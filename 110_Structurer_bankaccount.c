#include<stdio.h>
#include<string.h>

typedef struct bankaccount{
    int accno ;
    char name[100];
}acc ;

int main(){

    acc p1 = {1234,"Priyanshu Gour"};
    acc p2 = {1235,"Devanshu Gour"};

    printf("P1 Account details : \nAccount no is : %d\nAccount holder name : %s\n\n",p1.accno,p1.name);
    printf("P2 Account detalis : \nAccount no is : %d\nAccount holder name : %s\n\n",p2.accno,p2.name);

    return 0 ;
}