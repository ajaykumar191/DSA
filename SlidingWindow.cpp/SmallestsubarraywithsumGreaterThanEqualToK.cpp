#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={1, 2, 3, 4, 5};
    int k = 11;
    int n = arr.size();
    int sum = 0;
    int minLen = INT_MAX;
    int left = 0;
    int right = 0;
    while(right<n){

        sum+=arr[right];

        while(sum>=k){
            minLen = min(minLen,right-left+1);
            sum-=arr[left];
            left++;
        }
        right++;

    }
    cout<<minLen<<endl;

    return 0;
}