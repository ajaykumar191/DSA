#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {100,200,300,400};
    int k = 2;
    long long sum =0;
    long long minSum = INT_MAX;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    minSum = min(minSum,sum);

    for(int i=k;i<arr.size();i++){
        sum-=arr[i-k];
        sum+=arr[i];
        minSum = min(minSum,sum);
    }

    cout<<"The min sum is "<<minSum<<endl;
    return 0;
}