#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main(){
    struct node* head= NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data= 2;
    head->next = NULL;

    struct node* current;
    current =  (struct node*)malloc(sizeof(struct node));
    head-> next = current;
    
    return 0;
}