#include<bits/stdc++.h>
using namespace std;

int canWePlace(vector<int>&stalls,int distance ,int k){
    int countCows = 1;
    int last = stalls[0];
    int n=stalls.size();
    for(int i=1;i<n;i++){

        if(stalls[i]-last>=distance){
            countCows++;
            last=stalls[i];
        }
    }

    return (countCows>=k);
}

int aggressiveCows(vector<int>&stalls,int k){

    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int limit = stalls[n-1]+stalls[0];

    for(int i=1;i<=limit;i++){
        if(canWePlace(stalls,i,k)==false){
            return i-1;
        }
    }
    return -1;
}

int main(){

    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}

//BinarySearch/AggresiveCowsBrute.cpp