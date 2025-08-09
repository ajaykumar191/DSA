#include<bits/stdc++.h>
using namespace std;
int main(){

    string num = "1432219";
    int k = 3;
    stack<int>st;

    for(int i=0;i<num.size();i++){

        int n = num[i]-'0';

        while(!st.empty() && k>0 && st.top()> n){
            st.pop();
            k--;
        }
        st.push(n);
    }

    while(k-->0){
        st.pop();
    }

    string ans ="";
    while(!st.empty()){
        ans+=st.top()+'0';
        st.pop();
    }

    while(ans.size()>0 && ans.back()=='0'){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());

    if(ans.size()>0){
        cout<<ans<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}