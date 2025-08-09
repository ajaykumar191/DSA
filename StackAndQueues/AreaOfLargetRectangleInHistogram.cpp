#include<bits/stdc++.h>
using namespace std;

vector<int>findPreviousSmallIndex(vector<int>&arr,int n){
    vector<int>psi(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&& arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            psi[i]=st.top();
        }
        st.push(i);
    }
    return psi;
}

vector<int>findNextSmallerIndex(vector<int>&arr,int n){
    vector<int>nsi(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            nsi[i]=st.top();
        }
        st.push(i);
    }
    return nsi;
}
int main(){

    vector<int>arr={2,1,5,6,2,3,1};
    int n = arr.size();
    vector<int>psi=findPreviousSmallIndex(arr,n);
    vector<int>nsi=findNextSmallerIndex(arr,n);

    for(int i =0;i<n;i++){
        cout<<psi[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<nsi[i]<<" ";
    }
    cout<<endl;

    int maxAns = 0;
    for(int i=0;i<n;i++){
        maxAns = max(maxAns, arr[i]* (nsi[i]-psi[i]-1));
        cout<<arr[i]* (nsi[i]-psi[i]-1)<<endl;
    }

    return 0;
}