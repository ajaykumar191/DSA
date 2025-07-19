#include<bits/stdc++.h>
using namespace std;


bool possible(vector<int>arr,int day,int k,int m){
    int count = 0; 
    int totalBouqets = 0;

    for(int i=0;i<arr.size();i++){

        if(arr[i]<=day){
            count++;
        }else{
            totalBouqets += count/k;
            count=0;
        }
    }
    totalBouqets += count/k;
    return (totalBouqets>=m);

}

int roseGarden(vector<int>arr,int k,int m){
    int n=arr.size();
    int low=INT_MAX;
    int high=INT_MIN;
    for(int i=0;i<n;i++){
        low=min(low,arr[i]);
        high=max(high,arr[i]);
    }
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(possible(arr,mid,k,m)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;


}
int main(){
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    cout<<ceil((double)3/(double)2)<<endl;
    return 0;
}