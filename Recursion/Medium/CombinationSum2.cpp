#include<bits/stdc++.h>
using namespace std;

void genrateCombinationSum2(int index, vector<int>&arr,int target,vector<int>&ds,vector<vector<int>>&result){
    if(target==0){
        result.push_back(ds);
        return;
    }

    for(int i=index;i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        genrateCombinationSum2(i+1,arr,target-arr[i],ds,result);
        ds.pop_back();
    }
}


vector<vector<int>>combinationSum2(vector<int>&arr,int target){
    vector<int>ds;
    vector<vector<int>>result;
    int index =0;
    sort(arr.begin(),arr.end());
    genrateCombinationSum2(index,arr,target,ds,result);


    return result;
}


int main(){
    vector<int> v{10,1,2,7,6,1,5};
    vector < vector < int >> comb = combinationSum2(v, 8);
    cout << "[ ";
    for (int i = 0; i < comb.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < comb[i].size(); j++) {
        cout << comb[i][j] << " ";
        }
        cout << "]";
    }
    cout << " ]";


    return 0;
}