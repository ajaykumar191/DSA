#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="tree";

    unordered_map<char,int>mp;

    for(char ch:s){
        mp[ch]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto it:mp){
        char ch = it.first;
        int count = it.second;
        pq.push({count,ch});
    }
    string ans ="";
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();

        char ch = it.second;
        int count = it.first;

        for(int  i=0;i<count;i++){
            ans+=ch;
        }
    }
    cout<<ans<<endl;
    return 0;
}