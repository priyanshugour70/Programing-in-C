#include<stdio.h>
#include<string.h>

// This Code is Written By Priyanshu Gour

typedef struct address {
    int houseno ;
    int blockno ;
    char city[100];
    char state[100];
}ads;

void adsdtls(ads pg);

int main(){

    ads add[5];

    printf("Enter first person details  :  \n");
    scanf("%d",&add[0].houseno);
    scanf("%d",&add[0].blockno);
    scanf("%s",&add[0].city);
    scanf("%s",&add[0].state);

    printf("\n");

    printf("Enter second person details  :  \n");
    scanf("%d",&add[1].houseno);
    scanf("%d",&add[1].blockno);
    scanf("%s",&add[1].city);
    scanf("%s",&add[1].state);

    printf("\n");

    printf("Enter third person details  :  \n");
    scanf("%d",&add[2].houseno);
    scanf("%d",&add[2].blockno);
    scanf("%s",&add[2].city);
    scanf("%s",&add[2].state);

    printf("\n");

    printf("Enter forth person details  :  \n");
    scanf("%d",&add[3].houseno);
    scanf("%d",&add[3].blockno);
    scanf("%s",&add[3].city);
    scanf("%s",&add[3].state);

    printf("\n");

    printf("Enter five person details  :  \n");
    scanf("%d",&add[4].houseno);
    scanf("%d",&add[4].blockno);
    scanf("%s",&add[4].city);
    scanf("%s",&add[4].state);

    adsdtls(add[0]);
    adsdtls(add[1]);
    adsdtls(add[2]);
    adsdtls(add[3]);
    adsdtls(add[4]);


    return 0 ;
}

void adsdtls(ads pg){

    printf("Address is : House no : %d Block no : %d City name : %s State name : %s ",pg.houseno,pg.blockno,pg.city,pg.state);
    printf("\n");
}