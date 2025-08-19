#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2, 1, 3, 4, 1, 2, 5, 1};
    int k = 3;
    int n = arr.size();
    int minSum = INT_MAX;
    int maxSum = INT_MIN;
    int sum =0;

    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int minSumIndex = 0;
    int maxSumIndex = 0;

    minSum = sum;
    maxSum = sum;
    cout<<maxSum<<endl;
    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];
        if(sum<=minSum){
            minSumIndex=i-k+1;
            minSum=sum;
        }
        if(sum>=maxSum){
            maxSumIndex=i-k+1;
            maxSum=sum;

        }
        
    }
    
    cout<<"The subarry of size " <<k<<" with minimum sum is "<<minSum<<endl;
    cout<<"The start index of minsum is  "<<minSumIndex<<endl;
    cout<<"The minsum subarrys is :"<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[minSumIndex++]<<" ";
    }
    cout<<endl;
    cout<<"The start index of maxsum is  "<<maxSumIndex<<endl;
    cout<<"The maxsum subarrys is :"<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[maxSumIndex++]<<" ";
    }

    return 0;
}