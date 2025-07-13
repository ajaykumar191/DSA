#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int index=-1;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            index=i;
            break;
        }
    }

    cout<<"The index is "<<index<<endl;
    cout<<"The number of times array rotated is "<<index+1<<endl;

    return 0;
}
//BinarySearch/HowmanyTimesArrayRotatedBrute.cpp