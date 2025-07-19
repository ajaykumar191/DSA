#include<bits/stdc++.h>
using namespace std;
int calculateCount(vector<int>&arr,int sum){
    int count =1;
    int totalSum=0;
    for(int i=0;i<arr.size();i++){
        if(totalSum+arr[i]<=sum){
            totalSum+=arr[i];
        }else{
            count++;
            totalSum=arr[i];
        }
    }
    return count;
}
int largestSubarraySumMinimized(vector<int>&arr,int k){
    int low=*max_element(arr.begin(),arr.end());
    int high= accumulate(arr.begin(),arr.end(),0);

    for(int i=low;i<=high;i++){

        int totalCount = calculateCount(arr,i);
        if(totalCount == k){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> a = {10, 20, 30, 40};
    int k = 2;
    int ans = largestSubarraySumMinimized(a, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

//BinarySearch/SplitLagestSumBrute.cpp