#include<bits/stdc++.h>
using namespace std;

double median(vector<int>arr1,vector<int>arr2){


    if (arr1.size() > arr2.size()) return median(arr2, arr1);

    int n1 = arr1.size();
    int n2 = arr2.size();

    int n = n1+n2;

    int left = (n+1)/2;

    int l1 = INT_MIN;
    int l2 = INT_MIN;
    int r1 = INT_MAX;
    int r2 = INT_MAX;

    int low = 0;
    int high =  n1;

    while(low<=high){
        int mid1 = (low+high)/2;
        int mid2 = left - mid1;

        int l1 = INT_MIN;
        int l2 = INT_MIN;
        int r1 = INT_MAX;
        int r2 = INT_MAX;
        if(mid1<n1) r1 = arr1[mid1];
        if(mid2<n2) r2 = arr2[mid2];

        if(mid1-1>=0) l1 = arr1[mid1-1];
        if(mid2-1>=0) l2 = arr2[mid2-1];

        if(l1<=r2 && l2<=r1){

            if(n%2 == 1) return max(l1,l2);
            else return ((double) max(l1,l2)+min(r1,r2))/2.0;
        }
        else if (l1>r2) high = mid1-1;
        else low = mid1+1;

    }
    return 0;
}

int main(){

    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    
    //vector<int>arr = {1,2,3,4,6,7,10,12,15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)<< median(a, b) << '\n';

}