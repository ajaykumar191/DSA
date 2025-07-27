#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(1);
    st.push(0);
    st.push(2);
    st.push(5);

    vector<int>arr;

    while(!st.empty()){
        arr.push_back(st.top());
        st.pop();
    }
    sort(arr.begin(),arr.end());
    int n =arr.size();
    for(int i=0;i<arr.size();i++){
        st.push(arr[n-i-1]);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}