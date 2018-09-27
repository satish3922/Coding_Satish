#include <stdio.h>

int BinarySearch(int A[], int n, int x){
  int low = 0, high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(A[mid] == x) return mid;
    else if(A[mid]>x) high = mid-1;
    else low = mid+1;
  }
  return -1;
}

int main(){
  int A[] = {1,2,3,5,8,9,10,15,16,18};
  int x;
  printf("Enter Element to search : ");
  scanf("%d",&x);
  int index = BinarySearch(A,10,x);
  if(index != -1){
    printf("Found at index : %d \n",index);
  }
  else printf("Not found\n" );
}
