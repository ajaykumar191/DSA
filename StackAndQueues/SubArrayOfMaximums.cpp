#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {3, 1, 2, 4};
    int n = arr.size();
    vector<int>ngi(n,n);
    vector<int>pgi(n,-1);
    stack<int>st;

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            pgi[i]=st.top();
        }
        st.push(i);
    }

    st = stack<int>();
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&& arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ngi[i]=st.top();
        }
        st.push(i);
    }
    int sum =0;
    for(int i=0;i<n;i++){

        int left = i-pgi[i];
        int right = ngi[i]-i;
        int totalSubArrays = left*right;
        sum+=totalSubArrays*arr[i];
    }   
    cout<<"The total sum is "<<sum<<endl;




    return 0;
}