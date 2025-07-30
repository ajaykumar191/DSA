#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int start,int end){
    while(start<=end){
        if(s[start]==s[end]){
            start++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}

void palindromePartitiong(int index,string s,int n,vector<string>&ds,vector<vector<string>>&ans){
    if(index==n){
        ans.push_back(ds);
        return;
    }

    for(int i =index;i<n;i++){
        if(isPalindrome(s,index,i)){
            ds.push_back(s.substr(index,i-index+1));
            palindromePartitiong(i+1,s,n,ds,ans);
            ds.pop_back();
        }
    }
}

int main(){

    string s ="aabb";
    int n =s.size();
    vector<string>ds;
    vector<vector<string>>ans;

    palindromePartitiong(0,s,n,ds,ans);

    for(int i=0;i<ans.size();i++){

        for(int j=0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}