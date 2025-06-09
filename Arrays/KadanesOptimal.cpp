#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=arr.size();

    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum>maxi){
            maxi=max(maxi,sum);
        }
        if(sum<=0){
            sum=0;
        }
    }
    cout<<"The max sum is "<<maxi<<endl;

    return 0;
}