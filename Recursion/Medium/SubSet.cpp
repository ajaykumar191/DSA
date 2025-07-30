#include<bits/stdc++.h>
using namespace std;

void generateSubsetSum(int index,vector<int>&arr,int n,vector<int>&res,int sum){

    if(index==n){
        res.push_back(sum);
        return;
    }

    if(index>0){
        if(arr[index]==arr[index-1]) return;
    }

    generateSubsetSum(index+1,arr,n,res,sum+arr[index]);
    generateSubsetSum(index+1,arr,n,res,sum);
}

vector<int>subsetSums(vector<int>&arr,int n){

    int index =0;
    vector<int>res;
    int sum=0;
    sort(arr.begin(),arr.end());
    generateSubsetSum(index,arr,n,res,sum);

    return res;
}

int main(){


    vector < int > arr{3,1,2};
    vector < int > ans = subsetSums(arr, arr.size());
    sort(ans.begin(), ans.end());
    cout<<"The sum of each subset is "<<endl;
    for (auto sum: ans) {
        cout << sum << " ";
    }
    cout << endl;

  return 0;
}