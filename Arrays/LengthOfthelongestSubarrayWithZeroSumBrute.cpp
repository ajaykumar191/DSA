#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={9, -3, 3, -1, 6, -5};
    int n=arr.size();

    int maxLen=0;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==0){
                maxLen =max(maxLen,j-i+1);
            }
        }
    }
    cout<<"The maxLen is "<<maxLen<<endl;
    return 0;
}