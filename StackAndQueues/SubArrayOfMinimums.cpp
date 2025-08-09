#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr ={3,1,2,4};
    int n  = arr.size();

    vector<int>psi(n,-1);
    vector<int>nsi(n,n);
    stack<int>st;
    for(int i =0;i<n;i++){

        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            psi[i]=st.top();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<psi[i]<<" ";
    }
    cout<<endl;
    st = stack<int>();
    for(int i =n-1;i>=0;i--){

        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            nsi[i]=st.top();
        }
        st.push(i);
    }
     for(int i=0;i<n;i++){
        cout<<nsi[i]<<" ";
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        int left = i-psi[i];
        int right = nsi[i]-i;

        int totalSubArrays = left * right;
        sum +=totalSubArrays* arr[i];
    }
    cout<<"The total sum is "<<sum<<endl;
    return 0;
}