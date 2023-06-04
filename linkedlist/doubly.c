#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

int main(){
    struct node* head = NULL; //creating a head
    struct node* node1 = (struct node*)malloc(sizeof(struct node));
    node1->prev = NULL;
    node1->data = 10;
    
    head= node1;
     struct node* node2= (struct node*)malloc(sizeof(struct node));
    node2->prev = node1;
    node2->data = 20;
    node1->next = node2;
    
    struct node* node3= (struct node*)malloc(sizeof(struct node));
    node3->prev = node2;
    node3->data = 30;
    node3->next= NULL;
    node2->next= node3;

    struct node* display = node3;
    printf("Traversal backward is \n");
    while(display!=NULL){
        printf("%d", display->data);
        display = display->prev;
    }
    printf("Traversal forward is \n");
    display = head;
    while(display!=NULL){
        printf("%d", display->data);
        display = display->next;
    }

return 0;
}
