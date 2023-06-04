#include <iostream>
using namespace std;
#define M 5

struct pile{
    int top;
    int arr[M];
};
void create_stack(struct pile *p){
    cout<<"Creating stack "<<endl;
    p->top = -1;
}
bool IsFull(struct pile *p){
    if(p->top == M-1){
        return true;
    }
    else
    return false;
}
bool IsEmpty(struct pile *p){
    if(p->top == -1){
        return true;
    }
    else
    return false;
}
void push(struct pile *p, int val){
    if(IsFull(p)){
        cout<<"OVERFLOW "<<endl;
    }
    else{
        p->top++;
        p->arr[p->top] = val;
        cout<<"Pushing the value "<<val <<" into the stack "<<endl;
    }
}
void pop(struct pile *p){
    int val;
    if(IsEmpty(p)){
        cout<<"UNDERFLOW "<<endl;
    }
    else{
        p->top--;
        val = p->arr[p->top];
        cout<<"Popped the value "<<val<<"from the stack "<<endl;
    }
}
void display(struct pile *p){
    for(int i=0;i<= p->top;i++){
        cout<<p->arr[i]<<"";
    }
}
int main(){
    struct pile p;
    create_stack(&p);
    push(&p, 4);
    push(&p, 3);
    push(&p, 2);
    pop(&p);
    display(&p);
    return 0;
}