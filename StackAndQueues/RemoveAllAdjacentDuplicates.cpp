#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "abbaca";
    string ans = "";
    for(int i=0;i<s.size();i++){
        if(!ans.empty() && ans.back()==s[i]){
            ans.pop_back();
        }else{
            ans.push_back(s[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}