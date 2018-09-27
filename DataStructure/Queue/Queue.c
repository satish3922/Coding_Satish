/*
  WAP to Implement Queue in C
*/

#include <stdio.h>
#define MAXSIZE 5

int arr[MAXSIZE], front = -1, rear = -1;
int add(int x);
int delete();
int isempty();
int isfull();
void print();

int main(){
  printf("Enqueue : %d\n",add(5));
  printf("Enqueue : %d\n",add(3));
  printf("Enqueue : %d\n",add(4));
  printf("Dequeue : %d\n",delete());
  printf("Enqueue : %d\n",add(6));
  printf("Enqueue : %d\n",add(1));
  printf("Dequeue : %d\n",delete());
  printf("Queue : ");
  print();
}

// isempty()
int isempty(){
  if(front == -1 && rear == -1)
    return 1;
  else
    return 0;
}

// isfull()
int isfull(){
  if(rear == MAXSIZE-1)
    return 1;
  else
    return 0;
}

// add(int x)
int add(int x){
  if(isempty() == 1){
    rear = 0;
    front = 0;
    arr[rear] = x;
    return x;
  }
  else if(isfull() == 1){
    return;
  }
  else{
    rear++;
    arr[rear] = x;
    return x;
  }
}

// delete()
int delete(){
  if(isempty() == 1){
    return 0;
  }
  else if(front > rear){
    return 0;
  }
  else{
    front++;
    return arr[front-1];
  }
}

// print()
void print(){
  int i;
  for(i=front;i<rear+1;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
