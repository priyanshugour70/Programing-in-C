#include <stdio.h>

// This Code is Writen By Priyanshu Gour

int fibonacciloop(int n);

int main() {

    printf("\nYour Fibonacci Number is :  %d", fibonacciloop(8));

    return 0 ;
}

int fibonacciloop(int n){
    // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("\nFibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (int i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}