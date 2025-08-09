#include<bits/stdc++.h>
using namespace std;
int main(){

    string str ="azxxzy";
    int n  = str.size();
    stack<char>st;

    for(char ch:str){
        if(!st.empty() && st.top()==ch){
            st.pop();
        }else{
            st.push(ch);
        }
    }
    string ans = "";
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

    return 0;
}