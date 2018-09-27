#include<stdio.h>
#include<malloc.h>
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};


struct Node* newNode(int data){
  struct Node* new = (struct Node*)malloc(sizeof(struct Node*));
  new->data = data;
  new->left = NULL;
  new->right = NULL;
  return new;
}
struct Node* Insert(struct Node* root, int data){
  if(root == NULL){
    root = newNode(data);
    printf("%d is inserted\n",data);
  }
  else if(data<=root->data){
    root->left = Insert(root->left,data);
    // printf("%d is inserted in left\n",data);
  }
  else{
    root->right = Insert(root->right,data);
    // printf("%d is inserted in right\n",data);
  }
  return root;
}

int FindMin(struct Node* root){
  if(root==NULL){
    printf("Error : Tree is Empty\n" );
    return -1;
  }
  while(root->left != NULL){
    root = root->left;
  }
  return root->data;
}
int FindMax(struct Node* root){
  if(root==NULL){
    printf("Error : Tree is Empty\n" );
    return -1;
  }
  while(root->right != NULL){
    root = root->right;
  }
  return root->data;
}

int main(){
  struct Node* root;
  root = NULL;
  int min, max;
  root = Insert(root,15);
  root = Insert(root,8);
  root = Insert(root,10);
  root = Insert(root,25);
  root = Insert(root,7);
  root = Insert(root,16);
  min = FindMin(root);
  max = FindMax(root);
  printf("Min element of Tree : %d \n",min);
  printf("Max element of Tree : %d \n",max);
  // scanf("%d ",&data);
  // if(Search(data)==true){
    // printf("Found %d \n",data);
  // }
  // else{
    // printf("Not Found \n");
  // }
}
