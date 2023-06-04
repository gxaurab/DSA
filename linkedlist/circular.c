#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){

    struct node* head = NULL;
    head= (struct node*)malloc(sizeof(struct node));
    head->data=10;
    
    struct node* temp1 = NULL;
    temp1= (struct node*)malloc(sizeof(struct node));
    temp1->data=20;

    struct node* temp2 = NULL;
    temp2= (struct node*)malloc(sizeof(struct node));
    temp2->data=30;

    head->next =temp1;
    temp1->next = temp2;
    temp2->next = head;
    

    struct node* display = head;
    while(display!=NULL){
        printf("%d",display->data); //display points to head but
        display= display->next; //it gets changed here so it is not valid for the if statement below
        

        if(display == head){ //here from th step 31 display has already pointed to something else 
            break;
        }
    }

    return 0;
}