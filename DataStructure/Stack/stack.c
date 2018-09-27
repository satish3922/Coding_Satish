/*
  WAP to Push and Pop in Stack!
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5
int arr[MAXSIZE];
int top = -1;
int isempty();
int isfull();
int push(int x);
int pop();
void print();

int main(){
  // Push Element
  printf("push : %d\n",push(5));
  printf("push : %d\n",push(2));
  printf("pop : %d\n",pop());
  printf("push : %d\n",push(3));
  printf("pop : %d\n",pop());
  printf("push : %d\n",push(4));
  printf("push : %d\n",push(7));
  printf("Stack is : ");
  print();
}

// isempty()
int isempty(){
  if(top == -1)
    return 1;
  else
    return 0;
}

// isfull()
int isfull(){
  if(top == MAXSIZE-1)
    return 1;
  else
    return 0;
}

// push(int x)
int push(int x){
  if(isfull() != 1){
    top++;
    arr[top] = x;
    return x;
  }
}

// pop()
int pop(){
  if(isempty() != 1){
    top--;
    return arr[top+1];
  }
}

// print()
void print(){
  int i;
  for(i=0;i<top+1;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
