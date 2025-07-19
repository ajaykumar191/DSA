#include<bits/stdc++.h>
using namespace std;
int countDays(vector<int>&weights,int threshold){
    int totalDays = 1;
    int load =0;
    int n=weights.size();
    for(int i=0;i<n;i++){
        if(load+weights[i]>threshold){
            totalDays++;
            load=weights[i];
        }else{
            load+=weights[i];
        }
    }
    return totalDays;
}
int leastWeightCapacity(vector<int>&weights,int d){
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
    int ans=-1;

    while(low<=high){
        int mid= (low+high)/2;
        if(countDays(weights,mid)<=d){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){

    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}