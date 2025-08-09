#include<bits/stdc++.h>
using namespace std;     

int  main(){

    vector<int>arr = {1,2,3,4,3};
    int n = arr.size();
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=n*2-1;i>=0;i--){
        int index = i%n;
        
        while(!st.empty() && arr[index]>=st.top()){
            st.pop();
        }
        if(!st.empty()){
            ans[index]=st.top();
        }
        st.push(arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    } 

    return 0;
}