#include<bits/stdc++.h>
using namespace std;

vector<int>nextSmallerElement(vector<int>&arr,int n){
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();

        }

        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}


int  main(){

    vector<int>arr = {2,1,2,4,3};
    int n = arr.size();
    vector<int>ans= nextSmallerElement(arr,n);
    for(int num:ans){
        cout<<num<<" ";
    }
}