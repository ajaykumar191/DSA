#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={13,46,24,52,20,9};
    int n = arr.size();
    cout<<"Before Sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){

        int miniIndex=i;

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[miniIndex]){
                miniIndex=j;
            }
        }
        swap(arr[miniIndex],arr[i]);
    }


    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}