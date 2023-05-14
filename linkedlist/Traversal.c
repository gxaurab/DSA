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
    
    //Now Traverse
    struct node* current = head; // initialized current to point to head
    while(current != NULL){ //if we do current->next != NULL then last node's value is not printed 
        printf(" The data is %d\n", current->data);
        current = current->next; // moved to the next node in each iteration
    }

    return 0;
}
