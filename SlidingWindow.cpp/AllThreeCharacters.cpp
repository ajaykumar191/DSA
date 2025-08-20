#include<bits/stdc++.h>
using namespace std;
int countTotalSubArrays(string&s,int n){
    unordered_map<char,int>mp;
    int count = 0;
    int left =0;
    for(int right = 0;right<n;right++){
        mp[s[right]]++;
        while(mp['a']>0 && mp['b']>0 && mp['c']>0){
            count+=(n-right);
            mp[s[left]]--;
            left++;
        }
    }
    return count;
}
int main(){

    string s="abcabc";
    int n = s.size();

    int count = countTotalSubArrays(s,n);
    cout<<count<<endl;

    return 0;
}