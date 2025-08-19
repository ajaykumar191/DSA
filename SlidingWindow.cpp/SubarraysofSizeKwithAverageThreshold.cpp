#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={2, 1, 3, 2, 4, 3};
    int k = 3;
    int threshold = 3;
    int count = 0;
    long long sum =0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }

    if(sum/k>=threshold) count++;

    for(int i=k;i<arr.size();i++){
        sum-=arr[i-k];
        sum+=arr[i];

        if(sum/k>=threshold)count++;
    }

    cout<<"The total number of subarrays with threshold greater than k are "<<count<<endl;
    return 0;
}