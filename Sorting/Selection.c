// Selection sorting algorithm
/*
01 12 23 34
02 13 24
03 14
04
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
    for(j=i+1;j<size;j++){
      if(arr[i]>arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(i=0;i<size;i++){
    printf("%d element  : %d \n",i+1,arr[i]);
  }

}
