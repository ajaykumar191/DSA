#include<bits/stdc++.h>
using namespace std;
string reArrange(string str,int n){
    unordered_map<char,int>mp;
    for(char ch:str){
        mp[ch]++;
    }

    priority_queue<pair<int,char>>pq;

    for(auto it:mp){
        pq.push({it.second,it.first});
    }
    string ans;
    if(pq.top().first> ((n+1)/2)){
        return ans;
    }
    pair<int,char>prev={0,'#'};
    while(!pq.empty()){

        char ch = pq.top().second;
        int count = pq.top().first;
        pq.pop();

        ans+=ch;
        count--;
        if(prev.first>0){
            pq.push(prev);
        }
        prev={count,ch};
    }
    if(ans.size()==str.size()) return ans;
    return "";

}
int main(){

    string str = "aaabbc";
    int n = str.size();
    string ans = reArrange(str,n);

    cout<<ans<<endl;
}