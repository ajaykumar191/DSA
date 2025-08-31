#include<bits/stdc++.h>
using namespace std;

int countPlastforms(vector<int>&arr,vector<int>&dep,int n){
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());

    int ans = 1;
    int count = 1;
    int i=1;
    int j=0;

    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }else{
            count--;
            j++;
        }
        ans = max(ans,count);
    }
    return ans;
}

int main(){
    vector<int>arr={900,945,955,1100,1500,1800};
    vector<int>dep={920,1200,1130,1150,1900,2000};
    int n = arr.size();

    cout<<"Minimum number of platforms required "<<countPlastforms(arr,dep,n);
    return 0;
}