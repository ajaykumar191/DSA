#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr={4, -1, -3, 5, -2, 6};
    int k = 3;
    int n = arr.size();

    vector<int>indices;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int minSum=sum;
    indices.push_back(0);
    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];

        if(sum<minSum){
            indices.clear();
            indices.push_back(i-k+1);
        }else if(sum==minSum){
            indices.push_back(i-k+1);
        }
    }
     for(int i=0;i<indices.size();i++){
        cout<<indices[i]<<" ";

    }
    cout<<endl;
    for(int i=0;i<indices.size();i++){

        int startIndex = indices[i];
        for(int j=startIndex;j<startIndex+k;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}