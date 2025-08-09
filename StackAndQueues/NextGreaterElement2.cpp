#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={1,2,3,4,3};
    int n = arr.size();

    stack<int>st;
    vector<int>ans(n,-1);

    for(int j=0;j<2;j++){
         for(int i=n-1;i>=0;i--){

        while(!st.empty() && arr[i]>=st.top()){
            st.pop();
        }

        if(!st.empty() && ans[i]==-1){
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }

   
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}