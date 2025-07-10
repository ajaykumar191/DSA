#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i=low;
    int j=high;

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

void quickSort(vector<int>&arr,int low,int high){

    if(low<high){
        int partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
    else{
        return ;
    }
    
}

int main(){

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;
    cout<<"Before sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quickSort(arr,0,n-1);



    cout<<"After sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}