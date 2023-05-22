#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

// Function to insert a node at the end of the linked list
void insertAtEnd(struct node** head, int data) {
    // Create a new node
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    // If the linked list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    struct node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Link the new node to the last node
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

    // Insert nodes at the end
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    // Print the linked list
    printList(head);

    return 0;
}
