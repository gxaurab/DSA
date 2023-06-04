#include <iostream>
using namespace std;
#define M 10
struct stack{
    int top;
    int arr[M];
};
void create_stack(struct stack *s){
    cout<<"Stack created "<<endl;
    s->top = -1;
}
bool IsFull(struct stack *s){
    if(s->top == M-1){
        return true;
    }
    else
    return false;
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
        cout<<"The stack is full, overflow "<<endl;
    }
    else{
        s->top++;
        s->arr[s->top] = a;
        cout<<"pushing "<< a <<" into the stack "<<endl;
    }
}
void pop(struct stack *s){
    if(IsEmpty(s)){
        cout<<"Unfortunately stack is empty "<<endl;
    }
    else{
        s->top--;
        cout<<"Popping the value "<< s->arr[s->top+1]  <<"out of the stack"<<endl;
  }
}

void display(struct stack *s){
    cout<<"The elements in the stack are "<<endl;
    for(int i =0;i<=s->top;i++){
        cout<<s->arr[i]<<"";
    }
}

int precedence(char op) {
    if(op == '+' || op == '-') {
        return 1;
    }
    else if(op == '*' || op == '/') {
        return 2;
    }
    else {
        return 0;
    }
}

int main(){
    struct stack s;
    create_stack(&s);
    push(&s, 4);
    push(&s, 8);
    push(&s, 6);
    pop(&s);
    display(&s);

return 0;

}