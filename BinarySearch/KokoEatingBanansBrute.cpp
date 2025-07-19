#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>arr){
    int maxi=INT_MIN;
    int n =arr.size();

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int findTotalHours(vector<int>arr,int h){
    int n =arr.size();
    int totalHours = 0;
    for(int i=0;i<n;i++){
        totalHours+=(int)ceil((double)arr[i]/(double)h);
    }
    return totalHours;

}
int minimumRateToEatBananas(vector<int>arr,int hours){
    int high = findMax(arr);
    int ans=-1;
    int low=1;
    while(low<=high){
        int mid=(low+high)/2;

        int consumedHours = findTotalHours(arr,mid);

        if(consumedHours<=hours){
            high=mid-1;
            ans=mid;
        }else{
            low=mid+1;
        }
    }
    return ans;

}
int main(){

    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
    
}