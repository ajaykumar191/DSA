#include<bits/stdc++.h>
using namespace std;

vector<int>findAllAnagrams(string&s,string&p){
    vector<int>ans;
    vector<int>required(26,0),window(26,0);
    if(p.size()>s.size())return ans;
    int n = s.size();
    int k = p.size();
    for(int i=0;i<k;i++){
        required[p[i]-'a']++;
        window[s[i]-'a']++;
    }
    if(required==window) ans.push_back(0);
    for(int i=k;i<n;i++){
        window[s[i-k]-'a']--;
        window[s[i]-'a']++;
        if(required==window) ans.push_back(i-k+1);
    }
    return ans;
}

int main(){
    string s = "abab", p = "ab";
    vector<int>ans=findAllAnagrams(s,p);
    for(int i:ans){
        cout<<i<<" ";
    }
//Output: [0, 6]

}