#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={0,0,1,1,0,0,1,1,1,0};
    int k = 2;
    int l = 0;
    int r = 0;
    int n = arr.size();
    int count =0;
    int maxLen =0;
    while(r<n){
        if(arr[r]==0) count++;

        while(count>k){
            if(arr[l]==0) count--;
            l++;
        }
        maxLen=max(maxLen,r-l+1);
        r++;
    }
    cout<<"The max length after k flips is "<<maxLen<<endl;
    return 0;
}