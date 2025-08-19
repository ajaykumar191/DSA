#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "AABABBA";
    int n = str.size();
    int k = 1;
    unordered_map<char,int>mp;
    int l = 0;
    int maxFreq=0;
    int maxLen = 0;
    for(int r=0;r<n;r++){
        mp[str[r]]++;
        maxFreq=max(maxFreq,mp[str[r]]);

        while(r-l+1 - maxFreq >k){
            mp[str[l]]--;
            if(mp[str[l]]==0) mp.erase(str[l]);
            l++;
        }
        maxLen = max(maxLen,r-l+1);
    }
    cout<<maxLen<<endl;

    return 0;
}