#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 20;
    int index=-1;

    for(int i=0;i<n;i++){
            if(arr[i]<x){
                index=i;
            }else if(arr[i]>x){
                break;
            }
    }

    cout<<"The upper bound is "<<index<<endl;

    return 0;
}