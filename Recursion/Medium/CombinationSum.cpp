#include<bits/stdc++.h>
using namespace std;

void findCombinationSum(int index ,vector<int>&arr,int target,vector<int>&ds,vector<vector<int>>&res,int n){
    if(index==n){
        if(target==0){
            res.push_back(ds);
        }
        return;
    }

    if(arr[index]<=target){
        ds.push_back(arr[index]);
        findCombinationSum(index,arr,target-arr[index],ds,res,n);
        ds.pop_back();
    }
    findCombinationSum(index+1,arr,target,ds,res,n);

}


vector<vector<int>>combinationSum(vector<int>arr,int target){
    int index =0;
    int n = arr.size();
    vector<vector<int>>res;
    vector<int>ds;
    findCombinationSum(index,arr,target,ds,res,n);

    return res;
}

int main(){

    vector < int > v {2,3,6,7};
    int target = 7;

    vector < vector < int >> ans = combinationSum(v, target);
    cout << "Combinations are: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
  }

    return 0;
}