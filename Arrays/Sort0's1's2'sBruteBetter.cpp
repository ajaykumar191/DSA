#include<bits/stdc++.h>
using namespace std;

int main(){

    
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    int n = arr.size();

    int zero_count = 0,one_count =0,two_count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero_count++;
        }else if(arr[i]==1){
            one_count++;
        }else{
            two_count++;
        }
    }
    for(int i=0;i<zero_count;i++){
        arr[i]=0;
    }
    for(int i=zero_count;i<zero_count+one_count;i++){
        arr[i]=1;
    }
    for(int i=zero_count+one_count;i<n;i++){
        arr[i]=2;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}