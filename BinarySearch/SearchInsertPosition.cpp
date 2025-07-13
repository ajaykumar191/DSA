#include<bits/stdc++.h>
using namespace std;


int searchPosition(vector<int>arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
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

int main(){

    vector<int>arr={1, 2, 4, 7};
    int n=arr.size();
    int x=8;


    int index=searchPosition(arr,x);
    if(index==-1){
        cout<<"The index is "<<n<<endl;

    }else{  
        cout<<"The index is "<<index<<endl;

    }

    return 0;
}