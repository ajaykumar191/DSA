#include<bits/stdc++.h>
using namespace std;

void combinationSum3(int index,int k,int n,vector<int>&ds,vector<vector<int>>&ans){
    if(ds.size()==k){
        if(n==0){
            ans.push_back(ds);
        }
        return;
    }

    for(int i=index;i<10;i++){
        if (i > n) break;
        ds.push_back(i);
        combinationSum3(index+1,k,n-i,ds,ans);
        ds.pop_back();
    }
}

int main(){

    int k = 3;
    int n = 7;
    vector<int>ds;
    vector<vector<int>>ans;
    int index =1;

    combinationSum3(index,k,n,ds,ans);

   for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}