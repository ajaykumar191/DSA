#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={1,0,1,0,1};
    int n = arr.size();
    int k = 1;

    int l =0;
    int r = 0;
    int sum =0;
    int count = 0;
    while(r<n){
        sum+=arr[r];
        while(sum>k){
            sum-=arr[l++];
        }
        count+=(r-l+1);
        r++;
    }
    cout<<"The total count is "<<count<<endl;
    return 0;
}