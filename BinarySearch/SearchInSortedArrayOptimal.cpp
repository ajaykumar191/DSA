#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int x = 6;
    int index=-1;
    int n = arr.size();
    int low=0;
    int high = n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x){
            index=mid;
            break;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }else {
            low=mid+1;
        }
    }

    if(index==-1){
        cout<<"Element not found! "<<endl;
    }else{
        cout<<"Element found at "<<index<<endl;
    }



    return 0;
}