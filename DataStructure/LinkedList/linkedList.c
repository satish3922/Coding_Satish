#include <stdio.h>
#include <stdlib.h>

// Creating Node type Structure (DataType)
struct Node{
  int data;
  struct Node* next;
};
struct Node* head = NULL; // Head Node

// Insertion at Begining of List
// void Insert_Begin(int data){
//   struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//   temp->data = data;
//   temp->next = head;
//   head = temp;
// }

// Insertion at End of List
// void Insert_Last(int data){
//   struct Node* temp = (struct Node*)malloc(sizeof(struct Node));;
//   temp->data = data;
//   temp->next = NULL;
//
//   if(head==NULL){
//     head = temp;
//   }
//   else{
//     struct Node* last = head;
//     while(last->next!=NULL){
//       last = last->next;
//     }
//     last->next = temp;
//   }
// }

// Insertion at nth position in List
void Insert_nth(int data,int pos){
  int i;
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  struct Node* temp = head;
  newNode->data = data;
  if(pos==1){
    newNode->next = head;
    head = newNode;
    return;
  }
  for(i=0;i<pos-2;i++){
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

// Delete Element from nth position
void Delete_nth(int pos){
  struct Node* temp = head;
  if(pos==1){
    head = temp->next;
    free(temp);
    return;
  }
  int i;
  for(i=0;i<pos-2;i++){
    temp = temp->next;
  }
  struct Node* temp2 = temp->next;
  temp->next = temp2->next;
  free(temp2);
}
// Printing List
void ListPrint(){
  struct Node* temp;
  temp = head;
  printf("List : ");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}


// Main Function
void main(){
  int i,n,data;
  // printf("Enter the Number of Element : ");
  // scanf("%d",&n);
  // for(i=1;i<=n;i++){
    // printf("Enter %d element : ",i);
    // scanf("%d",&data);
    // Insert_Last(data);
    // ListPrint();
  // }
  Insert_nth(5,1); // 5
  ListPrint();
  Insert_nth(3,2); // 5 3
  ListPrint();
  Insert_nth(6,1); // 6 5 3
  ListPrint();
  Insert_nth(4,3); // 6 5 4 3
  ListPrint();
  Insert_nth(8,1); // 8 6 5 4 3
  ListPrint();
  Delete_nth(2);
  ListPrint();
}
