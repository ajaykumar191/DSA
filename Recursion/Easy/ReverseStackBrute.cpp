#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int>&st){
    stack<int>temp;

    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
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