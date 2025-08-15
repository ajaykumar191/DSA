#include<bits/stdc++.h>
using namespace std;

vector<int> getDays(vector<int>arr,int n){
    
    vector<int>ans(n,0);
    
    for(int i=0;i<n;i++){
        int days = 0;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                days = (j-i);
                break;
            }
        }
        ans[i]=days;
    }
    return ans;
}

int main(){

    //vector<int>arr = {73,74,75,71,69,72,76,73};
    vector<int>arr = {30,40,50,60};
    int n = arr.size();

    vector<int>ans = getDays(arr,n);
    for(int num:ans){
        cout<<num<<" ";
    }

    return 0;
}