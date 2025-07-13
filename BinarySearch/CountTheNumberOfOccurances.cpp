#include<bits/stdc++.h>
using namespace std;
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
    return index;
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
    return index;
}
int main(){

    //Input: N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
    //                0, 1,  2,  3,  4,  5,  6
    vector<int>arr = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int n = arr.size();
    int x = 3;
    
    int ceil = findCeil(arr,x);
    int floor = findFloor(arr,x);

    cout<<"Ceil "<<ceil<<endl;
    cout<<"Floor "<<floor<<endl;
    cout<<"The total number of occurances are "<<floor - ceil + 1<<endl;

    return 0;
}