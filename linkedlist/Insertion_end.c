#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main(){
    struct node* head = NULL;
    head =  (struct node*)malloc(sizeof(struct node));
    head->data = 2;
    struct node* temp1;
    temp1= (struct node*)malloc(sizeof(struct node));
    temp1->data = 30;
    struct node* temp2;
    temp2= (struct node*)malloc(sizeof(struct node));
    temp2->data = 40; // fixed this to make it different from temp1
    
    //link the nodes
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;

    //create new node
    struct node * new;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = 8;
    new->next = NULL;
    //adding it to the end of the node
    temp2->next = new;
    //traverse and printing the data's
    struct node* display = head;
    while(display!=NULL){ //display!=NULL, display le aba kei point gareko xaina that means after the last node
        printf("%d", display->data);
        display = display->next;
    }

    return 0;
}