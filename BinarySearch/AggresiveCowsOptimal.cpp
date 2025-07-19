#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int>&stalls,int distance ,int k){
    int n= stalls.size();
    int countCows= 1;
    int last = stalls[0];

    for(int i=1;i<n;i++){
        if(stalls[i]-last>=distance){
            countCows++;
            last = stalls[i];
        }
        if(countCows>=k) return true;
    }

    return (countCows>=k);
}


int aggressiveCows(vector<int>&stalls,int k){
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=1;
    int high = stalls[n-1]-stalls[0];
    int ans =-1;
    while(low<=high){

        int mid = (low+high)/2;
        if(canWePlace(stalls,mid,k)){
            ans = mid;
            low= mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
    
}

int main(){

    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;

    
}