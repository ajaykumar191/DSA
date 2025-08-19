#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "aabacbebebe";
    int k = 3;
    int maxLen = 0;
    unordered_map<char,int>mp;
    int n = str.size();
    int l = 0;
    int r = 0;
    while(r<n){
        mp[str[r]]++;
        while(mp.size()>k){
            mp[str[l]]--;
            if(mp[str[l]]==0) mp.erase(str[l]);
            l++;
        }
        maxLen = max(maxLen,r-l+1);
        r++;
    }
    cout<<"The longest substring with at most "<<k<<" distinct characters is "<<maxLen<<endl;
    return 0;
}