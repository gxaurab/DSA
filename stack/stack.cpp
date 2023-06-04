#include <iostream>
#define size 10
using namespace std;

struct stack{
    //int arr[size];
    int *arr;
    int top;
};

bool isFull(struct stack *s){
    if(s->top == size-1){
            return 1;
    }
    else{
        return false;
    }
}
bool isEmpty(struct stack *s){
    if(s->top<0){
        return 1;
    }
    else{
        return false;
    }
}
void push(struct stack *s, int val){
    if(isFull(s)){
        cout<<"Stack overflow"<<endl;
    }
    else{
        s->top++;
        s->arr[size-1]=val;
    }
}

int pop(struct stack *s){
    if(isEmpty(s)){
        cout<<"Stack underflow "<<endl;
    }
    else{
        int val=s->arr[size-1];
        s->top--;
    
        return val;
    }
}
void display(struct stack *a){
    int i=0;
    for(i=0;i< a->top;i++){
        cout<<a->arr[i]<<" ";
    }
}

int main(){
    struct stack s;
    s.top = -1;
    push(&s,12);
    push(&s,1);
    push(&s,10);
    pop(&s);
    display(&s);
    return 0;
}

