#include<stdio.h>

int main(){

    int day;
    printf("Enter 1 to 7 any number : ");
    scanf("%d", &day);

    switch(day){
        case 1 : {
            printf("Monday..!");
            break ;
        }
        case 2 : {
            printf("Tuesday..!");
            break ;
        } 
        case 3 : {
            printf("Wednesday..!");
            break ;
        }
        case 4 : {
            printf("Thrusday..!");
            break ;
        }
        case 5 : {
            printf("Friday..!");
            break ;
        }
        case 6 : {
            printf("Saturday..!");
            break ;
        }
        case 7 : {
            printf("Sunday..!");
            break ;
        }
        default : printf("Wrong Choice ..!!  ");
    }
    return 0 ;
}