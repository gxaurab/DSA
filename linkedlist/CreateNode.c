#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){
    struct node* head=NULL; //head initiailze to null at very first
    head = (struct node*)malloc(sizeof(struct node)); //head has new value as address of next node
    //struct node* typecast ho malloc le struct node ko lagi size xuttayera typecast ko type ho or ho bhnxa
    printf("Enter the data");
    scanf("%d",&head->data);  //head ma address xa so head bata data ma gayem
    head->next=0; //head bata next ma gayem
    //Thus we created a node
return 0;
}
 /*
 OR after 11th line
 head->data = 10;
 head->next =  Null;
 
 also can be done EASIER
 */