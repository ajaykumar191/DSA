#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {1,4,3,8,5};
    int n = arr.size();
    vector<int>peaks;

    for(int i =0;i<n;i++){

        if(i!=0 && i!=n-1 && arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            peaks.push_back(i);
        }
    }
    return 0;
}

//https://leetcode.com/problems/find-the-peaks/submissions/1705080330/