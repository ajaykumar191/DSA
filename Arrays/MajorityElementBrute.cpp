#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n=arr.size();

    for(int i=0;i<n;i++){

        int ele = arr[i];
        int count =0;
        for(int j=0;j<n;j++){
            if(ele == arr[j]){
                count++;
            }
        }
        if(count>n/2){
            cout <<"The element with more than n/2 times appearance " << arr[i]<<endl;
        }
    }



    return  0;
}