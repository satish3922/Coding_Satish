/*
  WAP to Implement Recursion in calculating Fibbonacci Series
*/

#include <stdio.h>

//Declare the factorial function
int Fibbonacci(int n);

int main(){
  int n,i,count = 0;
  printf("===== Program to Generate Fibbonacci Series ======\n");
  printf(" Enter Nth Fibbonacci\t:\t");
  scanf("%d",&n);
  for (i=0; i<n; i++){
    printf("%d ",Fibbonacci(count));
    count++;
  }
  printf("\n");
}

// Defining function
int Fibbonacci(int n){
  if(n == 0)
    return 0;
  else if(n == 1)
    return 1;
  else
    return (Fibbonacci(n-1) + Fibbonacci(n-2));
}
