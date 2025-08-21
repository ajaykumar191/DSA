#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int low,int high){
    int i =low;
    int j=high;
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
    if (low == high) return arr[low];
    if(low<=high){
        int pivotIndex = partition(arr,low,high);
        if(pivotIndex==k) return arr[pivotIndex];
        else if(pivotIndex<k) return quickSelect(arr,pivotIndex+1,high,k);
        else return quickSelect(arr,low,pivotIndex-1,k);
    }
    return -1;
}

int main(){

    vector<int> arr = {3, 2, 1, 5, 6, 4};
    int n = arr.size();
    int k = 5;
    int kthlargest = quickSelect(arr, 0, n - 1,n-k);
    cout<<"kth largest element is "<<kthlargest<<endl;
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;

    return 0;
}