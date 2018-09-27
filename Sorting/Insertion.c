// Insertion sorting algorithm

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
  for(i=1;i<=size;i++){
    temp = arr[i];
    j = i-1;
    while(temp<arr[j] && j>=0){
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = temp;
  }
  for(i=0;i<size;i++){
    printf("%d element  : %d \n",i+1,arr[i]);
  }

}
