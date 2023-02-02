#include <stdio.h>

int main(){

    int num = 5 ,numm = 10 ;

    printf("AND operator : %d\nOR operator : %d\nNOT operator : %d",(num != numm)&&(num != numm),(num == numm)||(num != numm),!((num != numm)&&(num != numm)));

    return 0 ;
}