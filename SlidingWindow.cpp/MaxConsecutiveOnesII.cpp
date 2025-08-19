#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={1, 0, 1, 1, 0};
    int n = arr.size();
    int count = 0;
    int left = 0;
    int right = 0;
    int maxLen = 0;
    while(right<n){
        if(arr[right]==0) count++;

        while(count>1){
            if(arr[left]==0) count--;
            left++;
        }
        maxLen = max(maxLen,right-left+1);
        right++;
    }
    cout<<maxLen<<endl;
    return 0;
}