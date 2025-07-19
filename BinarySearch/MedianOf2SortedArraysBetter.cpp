#include<bits/stdc++.h>
using namespace std;

double median(vector<int>&arr1,vector<int>&arr2){

    int n1 = arr1.size();
    int n2 = arr2.size();

    int i=0;
    int j=0;

    int count =0;
    int ele1 = -1;
    int ele2 = -1;
    int n = n1+n2;
    int mid = n/2;

    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(count == mid) ele1 = arr1[i];
            if(count == mid-1) ele2 = arr1[i];
            count++;
            i++;

        }else{
            if(count == mid) ele1 = arr2[j];
            if(count == mid-1) ele2 = arr2[j];
            count++;
            j++;
        }
    }
    while(i<n1){
        if(count == mid) ele1 = arr1[i];
        if(count == mid-1) ele2 = arr1[i];
        count++;
        i++;
    }
    while(j<n2){
        if(count == mid) ele1 = arr2[j];
        if(count == mid-1) ele2 = arr2[j];
        count++;
        j++;
    }

    if(n%2){
        return double (ele1);
    }else{
        return  (ele1+ele2)/2.0;
    }
    return 0;
}


int main(){
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15,18};
   // vector<int>arr = {1,2,3,4,6,7,10,12,15,18};
    cout << "The median of two sorted array is " << fixed << setprecision(1)<< median(a, b) << '\n';
}