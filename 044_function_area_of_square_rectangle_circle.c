#include<stdio.h>
#include<math.h>

// This Code is Writen By Priyanshu Gour

float areaofcircle(float r);
float areaofrectangle(float l ,float w);
float areaofsquare(float s);

int main(){

    char area ;
    printf("Enter \nc for area of circle\nr for area of rectange\ns for area of square\n----------->   :  ");
    scanf("%c",&area);

    if(area == 'c'){
        float radious ;
        printf("Enter your Radious  :  ");
        scanf("%f",&radious);

        printf("%.1f",areaofcircle(radious));
    }else if(area == 'r'){
        float length,width;
        printf("Enter length :  ");
        scanf("%f",&length);
        printf("Enter width :  ");
        scanf("%f",&width);

        printf("%.1f",areaofrectangle(length,width));
    }else if(area == 's'){
        float side;
        printf("Enter Side :  ");
        scanf("%f",&side);

        printf("%.1f",areaofsquare(side));
    }else{
        printf("Wrong choice ..  ! ");
    }
    
    return 0 ;
}

float areaofcircle(float r){
    return 3.14*r*r ;
}

float areaofrectangle(float l, float w){
    return l*w ;
}

float areaofsquare(float s){
    return pow(s,2) ;
}