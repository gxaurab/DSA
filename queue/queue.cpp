#include <iostream>
#define M 5
using namespace std;
struct queue{
    int front, rear;
    int arr[M];
};
void createQueue(struct queue *q){
    cout<<"Queue created "<<endl;
    q->front = -1;
    q->rear = -1;
}
bool IsFull(struct queue *q){
    if(q->rear == M-1){
        return true;
    }
    else{

        return false;
    }
}
bool IsEmpty(struct queue *q){
    if(q->front == -1){
        return true;
    }
    else{

        return false;
    }
}
void push(struct queue* q, int a){
    if(IsFull(q)){
        cout<<"Overflow"<<endl;
    }
    else{
       
        q->arr[q->rear+1] = a;
         q->rear++;
    }
}
void pop(struct queue* q){
    if(IsEmpty(q)){
        cout<<"Underflow"<<endl;
    }
    else{
        int a =q->arr[q->front]; 
        q->front++;
    cout<<"Popped "<<a<< "from the queue"<<endl;
    }
}


int main(){
    struct queue q;
    push(&q, 10);
    push(&q, 20);
    pop(&q);
    return 0;
}