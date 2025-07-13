#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={5,4,3,2,1};
    int n =arr.size();

    int count =0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]>arr[j]) count++;
        }
    }
    cout<<"The total number os inversions are "<<count<<endl;

    return 0;
}
//Arrays/CountInversionsBrute.cpp