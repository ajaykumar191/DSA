#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=arr.size();

    int maxi=INT_MIN;

    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){

            int sum=0;

            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxi=max(maxi,sum);
        }
    }
    cout << "The maximum Subarray is "<<maxi<<endl;


    return  0;
}