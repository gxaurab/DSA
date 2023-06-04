#include <iostream>
using namespace std;
#define size 10

struct stack{
    int *arr;
    int top;
    int arr[size];
};

bool isFull(struct stack *s){
    if(s->top == size-1){
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
bool isEmpty(struct stack *s){
    if(s->top<0){
        return 1;
    }
    else{
        return false;
    }
}
char infix2postfix(struct stack *s){
    struct stack opstack;
    struct stack poststack;
     int i,j =0;
     while(s->arr[i]!='\0')

}
int main(){
    struct stack s;
    struct stack ps;
    struct stack op;
    s.top =-1;
    ps.top = -1;
    op.top = -1;
    cout<<"Enter the expression "<<endl;
    cin>>s.arr;


    return 0;
}