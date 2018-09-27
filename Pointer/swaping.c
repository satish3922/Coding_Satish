/*
  WAP to Swap two number using Pointers
*/

#include <stdio.h>
void swap(int* p, int* k);

int main(int argc, char const *argv[]) {
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  printf("Value before swaping : %d & %d \n", a, b);
  swap(&a,&b);
  printf("Value after swaping : %d & %d \n", a, b);
  return 0;
}

void swap(int* p, int* k){
  int temp;
  temp = *p;
  *p = *k;
  *k = temp;
}
