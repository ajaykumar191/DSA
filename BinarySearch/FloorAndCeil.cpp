#include<bits/stdc++.h>
using namespace std;
//Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5


int findCeil(vector<int>arr,int x){
    int low=0;
    int high=arr.size()-1;

    int index=-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            index=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return arr[index];
}

int findFloor(vector<int>arr,int x){
    int low=0;
    int high=arr.size()-1;

    int index=-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            index=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return arr[index];
}

int main(){

    vector<int>arr={3, 4, 4, 7, 8, 10};
    int n=arr.size();
    int x = 5;

    int ceil = findCeil(arr,x);
    int floor= findFloor(arr,x);

    cout<<"The ceil is "<<ceil<<endl;
    cout<<"The floor is "<<floor<<endl;

    return 0;
}