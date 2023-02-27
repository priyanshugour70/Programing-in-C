#include<stdio.h>
#include<math.h>

// This Code is Writen By Priyanshu Gour

void areaofcircle(float r);
void areaofrectangle(float l ,float w);
void areaofsquare(float s);

int main(){

    char area ;
    printf("Enter \nc for area of circle\nr for area of rectange\ns for area of square\n----------->   :  ");
    scanf("%c",&area);

    if(area == 'c'){
        float radious ;
        printf("Enter your Radious  :  ");
        scanf("%f",&radious);

        areaofcircle(radious);
    }else if(area == 'r'){
        float length,width;
        printf("Enter length :  ");
        scanf("%f",&length);
        printf("Enter width :  ");
        scanf("%f",&width);

        areaofrectangle(length,width);
    }else if(area == 's'){
        float side;
        printf("Enter Side :  ");
        scanf("%f",&side);

        areaofsquare(side);
    }else{
        printf("Wrong choice ..  ! ");
    }
    
    return 0 ;
}

void areaofcircle(float r){
    // float x = pow(r,2);
    // float y = 3.14 * x ;
    printf("Area of Circle is  :  %.1f",3.14*r*r);
}

void areaofrectangle(float l, float w){
    printf("Area of Rectangle is  :  %.1f",l*w);
}

void areaofsquare(float s){
    printf("Area of Square is :  %.1f",pow(s,2));
}