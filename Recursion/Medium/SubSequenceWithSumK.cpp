#include<bits/stdc++.h>
using namespace std;

bool checkIfExistsSubsequeenceWithSumK(int index,int sum,vector<int>&arr,int k){

    if(index == arr.size()){
        if(sum==k){
            return true;
        }else{
            return false;
        }
    }

    bool include = checkIfExistsSubsequeenceWithSumK(index+1,sum+arr[index],arr,k);
    bool exclude = checkIfExistsSubsequeenceWithSumK(index+1,sum,arr,k);

    return include | exclude;
}

int countAllSubsequncesWithSumK(int index,int sum,vector<int>&arr,int k ){
    if(index == arr.size()){
        if(sum == k){
            return 1;
        }else{
            return 0;
        }
    }

    int include = countAllSubsequncesWithSumK(index+1,sum+arr[index],arr,k);
    int exclude = countAllSubsequncesWithSumK(index+1,sum,arr,k);

    return include+exclude;
}

void getAllSubsequencesOfSumK(int index,int sum ,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int n,int k){
    if(index==n){
        if(sum == k){
            ans.push_back(ds);
        }
        return;
    }

    ds.push_back(arr[index]);
    getAllSubsequencesOfSumK(index+1,sum+arr[index],arr,ds,ans,n,k);
    ds.pop_back();
    getAllSubsequencesOfSumK(index+1,sum,arr,ds,ans,n,k);

}

int main(){

    vector<int>arr ={1,3,5,6,7};
    int k =9;

    // bool ans =  checkIfExistsSubsequeenceWithSumK(0,0,arr,k);
    // if(ans){
    //     cout<<"Yes!"<<endl;
    // }else{
    //     cout<<"No!"<<endl;
    // }

    //int count = countAllSubsequncesWithSumK(0,0,arr,k);
    //cout<<"The total number of subsequences are "<<count<<endl;
    vector<int>ds;
    vector<vector<int>>ans;
    int n = arr.size();
    getAllSubsequencesOfSumK(0,0,arr,ds,ans,n,k);

    for(auto it:ans){
        for(int num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}