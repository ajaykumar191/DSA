#include<bits/stdc++.h>
using namespace std;
int c =0;

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
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

void countPairs(vector<int>&arr,int low,int mid,int high){
    int right=mid+1;
    for(int i=low;i<=mid;i++){

        while(right<=high && arr[i]>2*arr[right]){
            right++;
        }
        c+= (right-(mid+1));
    }
}

void mergeSort(vector<int>&arr,int low,int high){
    if(low>=high){return;}

    int mid= (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    countPairs(arr,low,mid,high);
    merge(arr,low,mid,high);
}
int main(){

    vector<int> arr = {4, 1, 2, 3, 1};
    int n = arr.size();

    mergeSort(arr,0,n-1);
    cout<<"Total number of inversions are "<< c <<endl;


    return 0;
}