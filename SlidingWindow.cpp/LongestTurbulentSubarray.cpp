#include<bits/stdc++.h>
using namespace std;

int maxTurbulenceSize(vector<int>&arr){

    int n = arr.size();
    if(n==1) return 1;

    int left = 0;
    int right = 0;
    int ans = 1;
    while(right<n-1){
        if(left==right){
            if(arr[left]==arr[left+1]) left++;

            right++;
        }else{
            if((arr[right-1] <arr[right] && arr[right]>arr[right+1] ) ||
            (arr[right-1] >arr[right] && arr[right]<arr[right+1] )){
                right++;
            }else{
                left = right;
            }
        }
        ans = max(ans,right-left+1);
    }
    return ans;
}


int main() {
    vector<int> arr = {9,4,2,10,7,8,8,1,9};
    cout << "Longest turbulent subarray length = " << maxTurbulenceSize(arr) << endl;
    return 0;
}