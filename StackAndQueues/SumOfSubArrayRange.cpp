#include<bits/stdc++.h>
using namespace std;

vector<int>nextSmallerIndex(vector<int>&arr,int n){
    vector<int>nsi(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){

        while(!st.empty()&& arr[st.top()]>=arr[i]){
            st.pop();
        }

        if(!st.empty()){
            nsi[i]=st.top();
        }
        st.push(i);
    }
    return nsi;

}


vector<int>previosSmallerIndex(vector<int>&arr,int n){
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

vector<int>nextGreaterIndex(vector<int>&arr,int n){
    vector<int>ngi(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ngi[i]=st.top();
        }
        st.push(i);
    }
    return ngi;
}


vector<int>previosGreaterIndex(vector<int>&arr,int n){
    vector<int>pgi(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            pgi[i]=st.top();
        }
        st.push(i);
    }
    return pgi;
}
int main(){

    vector<int> arr = {3, 1, 2, 4};
    int n = arr.size();
    vector<int>nsi=nextSmallerIndex(arr,n);
    vector<int>psi=previosSmallerIndex(arr,n);
    vector<int>ngi=nextGreaterIndex(arr,n);
    vector<int>pgi=previosGreaterIndex(arr,n);

    int largetSum = 0;
    int smallSum = 0;

    for(int i=0;i<n;i++){
        int left = i-psi[i];
        int right = nsi[i]-i;
        int totalSubArrays = left*right;
        smallSum+=totalSubArrays*arr[i];
    }
    for(int i=0;i<n;i++){
        int left = i-pgi[i];
        int right = ngi[i]-i;
        int totalSubarrays = left*right;
        largetSum+=totalSubarrays*arr[i];
    }

    cout<<"The sum is "<<largetSum-smallSum<<endl;

    return 0;
}