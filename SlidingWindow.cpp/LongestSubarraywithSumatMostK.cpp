#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int>arr = {1, 2, 1, 0, 1, 1, 0}; 
    int  K = 4;
    int n = arr.size();
    int left = 0, right = 0;
    int sum=0;
    int maxLen = 0;
    while(right<n){
        sum+=arr[right];

        while(sum>K){
            sum-=arr[left];
            left++;

        }
        maxLen = max(maxLen,right-left+1);
        right++;
    }
    cout<<maxLen<<endl;
    return 0;
}