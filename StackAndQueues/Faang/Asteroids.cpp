#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={3,5,-2};
    int n = arr.size();
    stack<int>st;

    for(int i=0;i<n;i++){
        bool destroyed= false;
        if(arr[i]>0){
            st.push(arr[i]);
        }
        else{
            while(!st.empty() && arr[i]<0 && st.top()<-arr[i]){
                st.pop();
                
            }
            if(!st.empty() && st.top()==-arr[i]){
                st.pop();
                destroyed = true;
            } else if (!st.empty() && st.top() > -arr[i] && st.top() > 0) {
                destroyed = true; 
            }
            if(!destroyed){
                st.push(arr[i]);
            }
       }

    }
   
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}