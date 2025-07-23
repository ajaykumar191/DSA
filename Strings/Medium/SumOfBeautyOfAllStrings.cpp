#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "aabcbaa";
    int n = s.size();
    int ans =0;

    for(int i=0;i<n;i++){
        unordered_map<char,int>mp;
        for(int j=i;j<n;j++){
            mp[s[j]]++;

            int least = INT_MAX;
            int most = INT_MIN;

            for(auto it :mp){
                least = min(least,it.second);
                most = max(most,it.second);
            }
            ans+=most-least;
        }
    }

    cout<<"The beauty of the string is "<<ans<<endl;

    return 0;
}