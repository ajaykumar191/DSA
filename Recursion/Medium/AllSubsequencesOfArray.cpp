#include<bits/stdc++.h>
using namespace std;

void generateAllSubsequences(int index,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){

    if(index==arr.size()){
        ans.push_back(ds);
        return;
    }

    ds.push_back(arr[index]);
    generateAllSubsequences(index+1,arr,ds,ans);
    ds.pop_back();
    generateAllSubsequences(index+1,arr,ds,ans);

}


int main(){
    vector<int>arr = {2,3,1};
    int n =arr.size();

    vector<vector<int>>ans;
    vector<int>ds;
    int index =0;

    generateAllSubsequences(index,arr,ds,ans);

    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}