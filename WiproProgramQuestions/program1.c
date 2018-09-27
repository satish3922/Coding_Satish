/*
  WAP in c to sort half of array in ascending and other half in descending
*/

#include <stdio.h>

int main(int argc, char* argv[]){
  int n = argc - 1; // len of array
  int arr[n];
  int arrCopy[n];
  int i,j;
  int temp;
  int temp2;
  int l = n/2;
  // n%2 == 0 ? l : l++;
  // int l = n/2;
  for( i = 0; i<n; i++ ){
    arr[i] = atoi(argv[i+1]);
  }
  for( i = 0; i<n; i++ ){
    printf("%d ",arr[i]);
  }
  printf("\n" );

  for( i = 0; i<n-1; i++ ){
    for( j = 0; j<l; j++ ){
      if(arr[j]>arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    for( j = l; j<n-1; j++ ){
      if(arr[j]<arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  for( i = 0; i<n; i++ ){
    printf("%d ",arr[i]);
  }
  printf("\n" );

}
