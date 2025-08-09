#include<bits/stdc++.h>
using namespace std;

vector<int>findPreviousGreaterElement(vector<int>&arr,int n){
    vector<int>pge(n,-1);
    stack<int>st;

    for(int i=0;i<n;i++){

        while(!st.empty() && arr[i]>=st.top()){
            st.pop();
        }
        if(!st.empty()){
            pge[i]=st.top();
        }
        st.push(arr[i]);
    }
    return pge;

}

int main(){

    vector<int>arr={3,10,4,2,1,2,6,1,7,2,9};
    int n = arr.size();
    vector<int>nge = findPreviousGreaterElement(arr,n);
    for(int i=0;i<nge.size();i++){
        cout<<nge[i]<<" ";
    }

    return 0;
}