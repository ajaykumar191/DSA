#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>stocks={100,80,60,70,60,75};
    stack<pair<int,int>>st;
    
    for(int i=0;i<stocks.size();i++){
        int span = 1;
        while(!st.empty() && stocks[i] >= st.top().first){
            span+=st.top().second;
            st.pop();
        }
        st.push({stocks[i],span});
        cout<<span<<" ";
    }
    return 0;
}