#include<bits/stdc++.h>
using namespace std;
int main(){

    string str = "()";
    //string str = "()[]{}";
    //string str = "(]";
    //string str = "([])";
    //string str = "([)]";

    stack<char>st;

    for(char ch:str){
        if(ch == '(' || ch == '[' ||  ch == '{') st.push(ch);
        else{
            if(st.size()==0){
                cout<<"The given string is not a valid string "<<endl;
                return 0;
            }else{
                char top = st.top();
                st.pop();
                if( (top =='(' && ch == ')') || (top == '[' && ch == ']') ||(top == '{' && ch == '}')) continue;
                else{
                    cout<<"The given string is not a valid string "<<endl;
                    return 0;
                }
            }
        }
    }
    if(st.empty()){
        cout<<"The given string is valid "<<endl;
    }

    return 0;
}