#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={3,1,2,5,3};
    int n=arr.size();
    vector<int>hashMap(n+1,0);

    for(int i=0;i<n;i++){
        hashMap[arr[i]]++;
    }
    int missing =-1;
    int repeating=-1;
    for(int i=1;i<=n;i++){

        if(hashMap[i]==0){
            missing=i;
        }

        if(hashMap[i]==2){
            repeating=i;
        }
    }
    cout<<"The missing number is "<<missing<<endl;
    cout<<"The repeating number is "<<repeating<<endl;



    return 0;
}