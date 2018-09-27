/*
  WAP to Implement Recursion in calculating Factorial
*/

#include <stdio.h>

//Declare the factorial function
int factorial(int n);

int main(){
  int n;
  printf("===== Program to find Factorial ======\n");
  printf(" Enter Number\t:\t");
  scanf("%d",&n);
  printf(" Factorial of Number %d is %d\n",n,factorial(n));
}

// Defining function
int factorial(int n){
  if(n == 1)
    return 1;
  else
    return n*factorial(n-1);
}
