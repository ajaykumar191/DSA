#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = arr.size();

    int low=0;
    int high = n-1;
    int mini=INT_MAX;
    int index=-1;
    while(low<=high){

        int mid = (low+high)/2;

        if(arr[low]<=arr[high]){
            if(arr[low]<mini){
                mini=arr[low];
                index=low;
               
            }
             break;
        }
        if(arr[low]<mini){
            mini=arr[low];
            index=low;
                
        }
        if(arr[low]<=arr[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    cout<<"The index is "<<index<<endl;
    cout<<"The arrys is "<<index<<" times rotated! "<<endl;
    return 0;
}