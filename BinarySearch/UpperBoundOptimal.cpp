#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>arr,int x){
    int low=0;
    int high=arr.size()-1;
    int index=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]<x){
            index=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return index;

}

int main(){

    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 20;
    
    int ans=upperBound(arr,x);
    cout<<"The upper bound is "<<ans<<endl;
    return 0;
}