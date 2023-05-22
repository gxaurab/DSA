#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

// Function to insert a node at the middle of the linked list
void insertAtMiddle(struct node** head, int data, int position) {
    // Create a new node
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    
    // If the linked list is empty or position is 0, make the new node the head
    if (*head == NULL || position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Traverse to the node before the desired position
    struct node* current = *head;
    int count = 1;
    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }

    // Insert the new node
    newNode->next = current->next;
    current->next = newNode;
}

// Function to print the linked list
void printList(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct node* head = NULL;

    // Insert nodes at the middle
    insertAtMiddle(&head, 2, 0);
    insertAtMiddle(&head, 30, 1);
    insertAtMiddle(&head, 40, 1);

    // Print the linked list
    printList(head);

    return 0;
}
