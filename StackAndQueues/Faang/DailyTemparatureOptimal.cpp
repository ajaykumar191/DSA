#include<bits/stdc++.h>
using namespace std;
vector<int>getDays(vector<int>arr,int n){
    vector<int>ans(n,0);
    stack<int>st;
    for(int i=n-1;i>=0;i--){

        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top()-i;
        }
        st.push(i);
    }
    return ans;
}
int main(){
 //vector<int>arr = {73,74,75,71,69,72,76,73};
    vector<int>arr = {30,40,50,60};
    int n = arr.size();

    vector<int>ans = getDays(arr,n);
    for(int num:ans){
        cout<<num<<" ";
    }

    return 0;
}