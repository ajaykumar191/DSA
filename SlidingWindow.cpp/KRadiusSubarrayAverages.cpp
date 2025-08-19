#include<bits/stdc++.h>
using namespace std;

vector<int>getAverages(vector<int>&arr,int k){
    int n = arr.size();
    int windowSize = 2*k+1;
    int windowSum = 0;
    vector<int>ans(n,-1);

    for(int i=0;i<windowSize;i++){
        windowSum+=arr[i];
    }
    ans[k]=windowSum/windowSize;

    for(int i=windowSize;i<n;i++){
        windowSum+=arr[i];
        windowSum-=arr[i-windowSize];
        ans[i-k]=windowSum/windowSize;
    }
    return ans;

}

int main(){
    vector<int> arr = {7,4,3,9,1,8,5,2,6};
    int k = 3;
    vector<int> res = getAverages(arr, k);

    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}