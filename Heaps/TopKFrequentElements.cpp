#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1,1,1,2,2,3};
    vector<int>ans;
    int n = arr.size();
    int k = 2;
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>>pq;
    for(int num:arr){
        mp[num]++;
    }

    for(auto it:mp){
        pq.push({it.second,it.first});
    }
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}