#include<bits/stdc++.h>
using namespace std;

bool possibleToday(vector<int>arr,int day,int m,int k ){
    int n=arr.size();
    int count =0;
    int noOfBouquets=0;

    for(int i=0;i<n;i++){
        if(arr[i]<=day){
            count++;
        }else{
            noOfBouquets+= (count/k);
            count=0;
        }
    }
    noOfBouquets+= (count/k);
    return (noOfBouquets>=m);
}   

int roseGarden(vector<int>arr,int k,int m){
    int n = arr.size();
    int mini=INT_MAX;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }

    for(int i=mini;i<=maxi;i++){
        if(possibleToday(arr,i,k,m)){
            return i;
        }
    }
    return -1;

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
    return 0;
}

//BinarySearch/MinimumDaysToMBouquetsBrute.cpp