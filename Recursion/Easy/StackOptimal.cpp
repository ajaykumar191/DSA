#include<bits/stdc++.h>
using namespace std;

void stackInsert(stack<int>&st,int val){
    if(st.empty()|| val<st.top()){
        st.push(val);
        return;
    }
    int top = st.top();
    st.pop();
    stackInsert(st,val);
    st.push(top);
}

void sortStack(stack<int>&st){
    if(st.empty()) return;

    int temp =st.top();
    st.pop();
    sortStack(st);
    stackInsert(st,temp);
}

int main(){

    stack<int>st;
    st.push(1);
    st.push(0);
    st.push(2);
    st.push(5);

    sortStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}