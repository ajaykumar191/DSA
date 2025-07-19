#include<bits/stdc++.h>
using namespace std;

double median(vector<int>&arr1,vector<int>&arr2){

    int n1 = arr1.size();
    int n2 = arr2.size();

    int i=0;
    int j=0;
    vector<int>arr;

    while(i<n1 && j<n2){
        
        if(arr1[i]<=arr2[j]){
            arr.push_back(arr1[i]);
            i++;
        }else{
            arr.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1){
        arr.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        arr.push_back(arr2[j]);
        j++;
    }

    int n = n1+n2;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(n%2){
        return arr[n/2];
    }else{
        return (double) (arr[n/2] + arr[(n/2)-1])/2.0;
    }

    return 0;

}   


int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)<< median(a, b) << '\n';
}

//BinarySearch/MedianOf2SortedArraysBrute.cpp