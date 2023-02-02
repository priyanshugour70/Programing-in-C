#include <stdio.h>

int main(){

    int age = 18 ;
    int _age = 19 ;

    int *ptr = &age ;
    int *_ptr = &_age ;

    printf("%u & %u Difference is : %u\n",_ptr,ptr,ptr-_ptr);
    _ptr = &age ;
    printf("Comparision is :  %u\n",ptr==_ptr);

    return 0 ;
}