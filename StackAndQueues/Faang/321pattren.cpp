#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr={-1, 3, 2, 0};
    int n = arr.size();

    stack<pair<int,int>>st;
    int curr_min = arr[0];

    for(int i=1;i<arr.size();i++){
        while(!st.empty() && arr[i]>=st.top().first){
            st.pop();
        }
        if(!st.empty() && arr[i]>st.top().second){
            cout<<"Yes we have 132 pattren "<<endl;
            return 0;
        }
        st.push({arr[i],curr_min});
        curr_min=min(curr_min,arr[i]);
    }
    cout<<"No 132 pattren found!"<<endl;
    return 0;
}