#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {100,200,300,400};
    int k = 2;
    long long sum =0;
    long long maxSum = INT_MIN;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxSum = max(maxSum,sum);

    for(int i=k;i<arr.size();i++){
        sum-=arr[i-k];
        sum+=arr[i];
        maxSum = max(maxSum,sum);
    }

    cout<<"The max sum is "<<maxSum<<endl;
    return 0;
}