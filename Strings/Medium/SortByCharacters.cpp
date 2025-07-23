#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="tree";
    unordered_map<char,int>mp;
    for(char c:s){
        mp[c]++;
    }

    priority_queue<pair<int,char>,vector<pair<int,char>>,greater<pair<int,char>>>pq;

    for(auto it : mp){
        char ch = it.first;
        int count = it.second;
        pq.push({count,ch});
    }

    string ans = "";
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();

        int count = it.first;
        char ch = it.second;
        for(int i =0;i<count;i++){
            ans+=ch;
        }
    }

    cout<<ans<<endl;




    return 0;
}