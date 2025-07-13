#include<bits/stdc++.h>
using namespace std;
//Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}

int main(){

    vector<int>arr={3,4,13,13,13,13,20,40};
    int n=arr.size();
    int target=13;
    int low=0;
    int high=n-1;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]<=target){

            index=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<"The last occurance is at "<<index<<endl;


    return 0;
}