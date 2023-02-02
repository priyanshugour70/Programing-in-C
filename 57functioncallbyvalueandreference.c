# include <stdio.h>

void square(int n);
void _square(int* n);

int main() {
    int number = 4;
    //call by value
    square(number);
    printf("n is : %d\n", number);
    //call by reference
    _square(&number);
    printf("n is : %d\n", number);
    return 0;
}

void square(int n) {
    n = n * n;
    printf("square is : %d\n", n);
}
void _square(int* n) {
    *n = *n * *n;
    printf("square is : %d\n", *n);
}