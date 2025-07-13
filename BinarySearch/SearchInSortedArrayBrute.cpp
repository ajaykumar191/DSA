#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={1,2,3,4,5,6,7};
    int x = 4;
    int index=-1;
    for(int i=0;i<arr.size();i++){

        if(arr[i]==x){
            index=i;
        }
    }
    if(index==-1){
        cout<<"Element not found!"<<endl;
    }else{
        cout<<"Element foudn at "<<index<<" index"<<endl;
    }
    return 0;
}

//BinarySearch/SearchInSortedArrayBrute.cpp