#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            cout<<"The lower bound is "<<i<<endl;
            return 0;
        }
    }

    cout<<"The lower bound is not found!"<<endl;

    return 0;
}