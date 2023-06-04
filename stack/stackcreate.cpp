#include <iostream>
#define M 5 
using namespace std;
struct stack{
    int top;
    int arr[M];
};
void createStack(struct stack* s){
    cout<<"Stack Created"<<endl;    
    s->top = -1;
}

bool IsFull(struct stack *s){
    if(s->top == M-1){
        return true;
    }
    else{
        return false;
    }
}
bool IsEmpty(struct stack *s){
    if(s->top == -1){
        return true;
    }
    else{
        return false;
    }
}
void push(struct stack *s, int a){
    if(IsFull(s)){
        cout<<"The stack is full, overflow"<<endl;
    }
    else{
        s->top++;
        s->arr[s->top-1] = a;
        cout<<"Pushing "<<a<<" into the stack"<<endl;
    }
}
void pop(struct stack *s){
    if(IsEmpty(s)){
        cout<<"The stack is empty, underflow"<<endl;
    }
    else{
        s->top--;
       int a= s->arr[s->top+1];
        cout<<"Pulling "<<a<<" out of the stack"<<endl;
    }
}

int main(){
    struct stack s;
    push(&s,1);
    push(&s,3);
    pop(&s);

    

    return 0;
}