#include<bits/stdc++.h>
using namespace std;

int c = 0;

void merge(vector<int>&arr,int low,int mid,int high){
    int left =low;
    int right = mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
    if(arr[left] <= arr[right]){
        temp.push_back(arr[left]);
        left++;
    }else{
        c += (mid - left + 1); 
        temp.push_back(arr[right]);
        right++;
    }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<int>&arr,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){ 

    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    mergeSort(a,0,n-1);

    cout<<"Total number of inversions are "<<c<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}

