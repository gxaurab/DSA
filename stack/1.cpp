#include <iostream>
#define M 5
using namespace std;
int top = -1;
 int stack[M];
int main(){
    int x;
    cout<<"Enter the data"<<endl;
    cin>>x;
    void push(int x);
    void pop();
    void peek();
    void display();
return 0;
}
void push(int x){
    if(top == M-1){
        cout<<"overflow cannot push any data's"<<endl;
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int i;
    if(top == -1){
        cout<<"underflow"<<endl;
    }
    else{
        i = stack[top];
        top--;
    }
    cout<<"the popped item is "<< i<<endl;
}
void peek(){
    if(top == -1){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The num is "<<stack[top]<<endl;
    }
 }
 void display(){
    for(int i = top;i>=0;i--){
        cout<<"stack[i]"<<endl;
    }
 }

