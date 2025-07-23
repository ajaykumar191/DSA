#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<string>strs = {"flower","flow","flight"};
    int n = strs.size();

    sort(strs.begin(),strs.end());

    string first = strs[0];
    string last = strs[n-1];
    string ans = "";
    for(int i=0;i<first.size();i++){
        if(first[i]==last[i]){
            ans+=first[i];
        }else{
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}