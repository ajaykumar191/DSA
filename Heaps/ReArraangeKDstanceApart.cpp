#include<bits/stdc++.h>
using namespace std;

string findKDistanceApart(string s,int k){
    unordered_map<char,int>mp;
    priority_queue<pair<int,char>>pq;
    for(char c : s) mp[c]++;

    for(auto it : mp){
        pq.push({it.second,it.first});
    }

    string ans = "";

    while(!pq.empty()){

        int cycle = k+1;
        vector<pair<int,char>>remain;

        while(cycle>0 && !pq.empty()){

            auto top= pq.top();
            int freq = top.first;
            char ch = top.second;
            pq.pop();
            if(freq>1){
                remain.push_back({freq-1,ch});
            }

            cycle--;
            ans+=ch;
        }
        for(auto i: remain){
            pq.push(i);
        }
        if(!pq.empty() && remain.size() < cycle) return "";
    }

    if(ans.size()==s.size()) return ans;
    return "";
}

int main(){

    string s = "aabbcc";
    int k = 3;
    string KDistanceApart= findKDistanceApart(s,3);
    cout<<KDistanceApart<<endl;
    return 0;
}