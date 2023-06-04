#include <iostream>
using namespace std;
#define M  100

struct Queue {
    int arr[M];
    int front, rear;
};


void createQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

bool IsEmpty(Queue* q) {
    return (q->front == -1);
}


bool IsFull(Queue* q) {
    return (q->rear == M - 1);
}

void Enqueue(Queue* q, int x) {
    if (IsFull(q)) {
        cout << "Queue is full!\n";
        return;
    }
    if (IsEmpty(q)) {
        q->front = q->rear = 0;
        q->arr[q->rear] = x;
    }
    else {
        q->rear++;
        q->arr[q->rear] = x;
    }
}


int Dequeue(Queue* q) {
    if (IsEmpty(q)) {
        cout << "Queue is empty!\n";
        return -1;
    }
    int x = q->arr[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front++;
    return x;
}
 


int main() {
    struct Queue q;
    createQueue(&q);

    Enqueue(&q, 10);
    Enqueue(&q, 20);
    Enqueue(&q, 30);
    Dequeue(&q);
    
    return 0;
}