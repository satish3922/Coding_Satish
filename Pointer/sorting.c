/*
  WAP to sort using Pointers
*/

#include <stdio.h>
void sort(int *arr, int *n);

int main(int argc, char const *argv[]) {
  int n = argc-1; // length of array
  int array[n]; // declare int array
  int i;
  // printf("%d\n",n );
  // printf("%d %d %\n",atoi(argv[1]),argv[2],argv[3]);
  for(i = 0; i<n; i++){
    array[i] = atoi(argv[i+1]);
  }
  printf("=== Before Sorting === \n");
  for(i = 0; i<n; i++){
    // printf("%d ",i);
    printf("%d ",array[i]);
  }

  sort(array,&n);
  printf("\n=== After Sorting === \n");
  for(i = 0; i<n; i++){
    printf("%d ",array[i]);
  }
  printf("\n" );
  return 0;
}

void sort(int *arr, int *n){
  int i;
  int j;
  int temp;
  for(i = 0; i<*n-1; i++){
    for(j = 0; j<*n-i-1; j++){
      if(*(arr+j)>*(arr+j+1)){
        temp = *(arr+j);
        *(arr+j) = *(arr+j+1);
        *(arr+j+1) = temp;
      }
    }
  }
}
