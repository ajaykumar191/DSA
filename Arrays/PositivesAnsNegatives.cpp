#include<bits/stdc++.h>
using namespace std;
//Assumption that we have equal number of positives and negatives.
int main(){

    vector<int>arr={1,2,-4,-5};
    int n=arr.size();

    vector<int>pos;
    vector<int>neg;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
    int posIndex=0;
    int negIndex=1;
    for(int i=0;i<n;i++){
        if(i%2){
            arr[negIndex]=
        }
    }


    return 0;
}