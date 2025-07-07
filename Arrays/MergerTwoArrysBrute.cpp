#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr1={1, 4 ,8 ,10};
    vector<int>arr2={2,3,9};
    int n=arr1.size();
    int m=arr2.size();
    int left =n-1;
    int right =0;

    while (left>=0 && right<m){
        
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    

    return 0;
}