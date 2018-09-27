/*
  WAP in c GCD using function
*/

#include <stdio.h>

int gcd( int a, int b);

int main(int argc, char *argv[]){
  int n = argc-1;
  int arr[n];
  int i;
  for(i = 0;i<n;i++){
    arr[i] = atoi(argv[i+1]);
  }
  printf("%d is GCD of Array ",gcdArray(arr,n));
  for(i = 0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n" );
}

int gcd(int a, int b){
  if(a == b){
    return a;
  }
  while (a!=b) {
    if(a>b)
      return gcd(a-b,b);
    else
      return gcd(a,b-a);
  }
}

int gcdArray(int arr[], int n){
  int result = arr[0];
  int i;
  for(i = 1; i<n; i++){
    result = gcd(arr[i], result);
  }
  return result;
}
