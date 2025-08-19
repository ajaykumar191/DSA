#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "ccaabbb";
    int k = 2;
    int n = s.size();

    int maxLen = 0;
    unordered_map<char,int>mp;

    int left = 0;
    int right = 0;

    while(right<n){
        mp[s[right]]++;

        while(mp.size()>k){
            mp[s[left]]--;
            if(mp[s[left]]==0) mp.erase(s[left]);
            left++;
        }
        maxLen = max(maxLen,right-left+1);
        right++;

    }
    cout<<maxLen<<endl;
    return 0;
}