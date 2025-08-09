#include<bits/stdc++.h>
using namespace std;

int main(){
    string str  = ")()())";
    stack<int>st;
    st.push(-1);
    int maxLen = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            st.push(i);
        }else{
            st.pop();
            if(st.empty()) st.push(i);
            else{
                maxLen= max(maxLen,i-st.top());
            }
        }
    }
    cout<<"The longest valid parentheses lenght is "<<maxLen<<endl;
}