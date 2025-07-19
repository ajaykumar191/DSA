#include<bits/stdc++.h>
using namespace std;


int findMax(vector<int>arr){
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}


int findTotalHours(vector<int>arr,int k){
    int n=arr.size();
    int totalHours =0;
    for(int i=0;i<n;i++){
        totalHours += (int)ceil((double)arr[i] / (double)k);

    }
    return totalHours;
}

int minimumRateToEatBananas(vector<int>arr,int h){
    int maxi=findMax(arr);

    for(int i=1;i<=maxi;i++){

        int timeConsumed = findTotalHours(arr,i);
        if(timeConsumed<=h){
            return i;
        }
    }
    return maxi;
}

int main(){

    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}