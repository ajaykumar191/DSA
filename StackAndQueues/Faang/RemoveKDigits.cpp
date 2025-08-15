#include<bits/stdc++.h>
using namespace std;

int main(){

    string num = "1432219";
    int  k = 3;
    stack<char>st;
    int i=0;
    for(int i=0;i<num.size();i++){
        
        while(!st.empty() && st.top()>num[i] && k>0){
            st.pop();
            k--;
        }
        st.push(num[i]);
        
    }
    while(k-->0){
        st.pop();
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    while(ans.size()>0 && ans.back()=='0') ans.pop_back();
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

}