#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char>st1,st2;

    for(char c:s){
        if(c=='('){
            st1.push(c);
        }else if(c==')'){
            if(!st1.empty()){st1.pop();}
            else if(!st2.empty()){st2.pop();}
            else{
                return false;
            }
        }else{
            st2.push(c);
        }
    }
    return st1.empty();
}

int main(){

    string  s = "(*))";
    if(isValid(s)){
        cout<<"The parenthesis is valid"<<endl;
    }else{
        cout<<"The given parenthesis is not valid "<<endl;
    }
    return 0;
}