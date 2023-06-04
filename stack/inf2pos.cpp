#include <iostream>
#include <stack>
using namespace std;
#include <string.h>

int precedence(char c){
    if(c == '^'){
        return 3;
    }
    else if ( c == '*'|| c == '/'){
        return 2;
    }
    else if(c == '+'|| c == '-'){
        return 3;
    }
    else -1;
}
string Infix2PostFix(string s){

    stack<char>st; //stack declared of name st that holds character
    string res;

    for(int i =0;s.length();i++){
        if(s[i]>= 'a' && s[i]<= 'z')||(s[i]>= 'A' && s[i]<= 'Z'){
           res+=s[i]; 
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!st.empty()&& st.top()!= '('){
                res +=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                //https://www.youtube.com/watch?v=mg9yi6YuAVk
            }
        }
    }
    
}