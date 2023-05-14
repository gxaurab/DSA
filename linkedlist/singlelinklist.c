#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
int main(){
  struct node *head = NULL;
  head = (struct node*)malloc(sizeof(struct node));
  head->data=20;
  //head->next=NULL; No need to do this 
  struct node* temp1;
  temp1= (struct node*)malloc(sizeof(struct node));
  temp1->data = 30;
  //temp1->next = NULL;
  
  struct node* temp2;
  temp2= (struct node*)malloc(sizeof(struct node));
  temp2->data = 30;
  //temp2->next = NULL;
  temp1->next=temp2;
  
    return 0;
}