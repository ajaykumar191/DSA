#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={100, 80, 60, 70, 60, 75, 85};
    int n = arr.size();     
    stack<pair<int,int>>st;
    vector<int>ans;

    for(int num:arr){
        int span = 1;

        while(!st.empty() && num>=st.top().first){
            span+=st.top().second;
            st.pop();
        }
        st.push({num,span});
        ans.push_back(span);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}