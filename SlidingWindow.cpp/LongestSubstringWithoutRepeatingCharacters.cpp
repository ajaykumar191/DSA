#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "abcabcbb";
    int n = str.size();
    unordered_map<char,int>mp;
    int maxLen = 0;
    int l =0;
    int r =0;
    while(r<n){
        mp[str[r]]++;

        while(mp[str[r]] > 1){

            mp[str[l]]--;
            if(mp[str[l]]==0) mp.erase(str[l]);
            l++;
        }
        maxLen = max(maxLen,r-l+1);

        r++;
    }

    cout<<"The maxleng of substring without repeting any character is "<<maxLen<<endl;
    return 0;
}