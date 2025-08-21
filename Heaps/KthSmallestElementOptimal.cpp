#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int low,int high){
    int i = low;
    int j = high;
    int pivot = arr[low];

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

int quickSelect(vector<int>&arr,int low,int high,int k){
    if(low==high) return arr[low];
    int pivotIndex = partition(arr,low,high);

    if(pivotIndex==k) return arr[pivotIndex];
    else if(pivotIndex>k) return quickSelect(arr,low,pivotIndex-1,k);
    else return quickSelect (arr,pivotIndex+1,high,k);

}

int main(){
     vector<int> arr = {3, 2, 1, 5, 6, 4};
    int n = arr.size();
    int k = 2;

    int kthSmallest = quickSelect(arr, 0, n - 1,  k-1);
    cout << k << "th smallest element is " << kthSmallest << endl;



    return 0;
}