#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&st,int value){
    if(st.empty()){
        st.push(value);
        return ;
    }

    int top = st.top();
    st.pop();
    insertAtBottom(st,value);
    st.push(top);
}

void reverseStack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,temp);
}

int main(){

    stack<int>st;
    st.push(1);
    st.push(0);
    st.push(2);
    st.push(3);
    reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}