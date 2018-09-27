// Bubble sorting algorithm
/*
01 01 01 01
12 12 12
23 23
24
*/

#include <stdio.h>

int main(){
  int i,j,temp,size;
  printf("Enter size of Array : ");
  scanf("%d",&size);
  int arr[size];
  for(i=0;i<size;i++){
    printf("Enter %d element : ",i+1);
    scanf("%d",&arr[i]);
  }
  // sorting
  for(i=0;i<size-1;i++){
    for(j=0;j<size-i-1;j++){
      if(arr[j]>arr[j+1]){
        temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(i=0;i<size;i++){
    printf("%d element  : %d \n",i+1,arr[i]);
  }

}
