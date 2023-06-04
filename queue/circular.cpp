#include <iostream>
#define M 5
using namespace std;

struct queue {
    int front, rear;
    int arr[M];
};

void createQueue(struct queue *q) {
    cout << "Queue created" << endl;
    q->front = -1;
    q->rear = -1;
}

bool IsFull(struct queue *q) {
    return (q->rear + 1) % M == q->front;
}

bool IsEmpty(struct queue *q) {
    return q->front == -1 && q->rear == -1;
}

void push(struct queue *q, int a) {
    if (IsFull(q)) {
        cout << "Overflow" << endl;
    }
    else {
        if (IsEmpty(q)) {
            q->front = 0;
        }
        q->rear = (q->rear + 1) % M;
        q->arr[q->rear] = a;
        cout << "Pushed " << a << " into the queue" << endl;
    }
}

void pop(struct queue *q) {
    if (IsEmpty(q)) {
        cout << "Underflow" << endl;
    }
    else {
        int a = q->arr[q->front];
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        }
        else {
            q->front = (q->front + 1) % M;
        }
        cout << "Popped " << a << " from the queue" << endl;
    }
}

void display(struct queue *q) {
    if (IsEmpty(q)) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue elements: ";
        int i = q->front;
        while (i != q->rear) {
            cout << q->arr[i] << " ";
            i = (i + 1) % M;
        }
        cout << q->arr[i] << endl;
    }
}

int main() {
    struct queue q;
    createQueue(&q);
    push(&q, 10);
    push(&q, 20);
    push(&q, 30);
    display(&q);
    pop(&q);
    display(&q);
    push(&q, 40);
    push(&q, 50);
    push(&q, 60);
    display(&q);
    return 0;
}
