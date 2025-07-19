#include<bits/stdc++.h>
using namespace std;

long double minimiseMaxDistance(vector<int>&arr,int k){
    int n =arr.size();
    vector<int>gasStations(n-1,0);
    priority_queue<pair<long double ,int >>pq;

    for(int i=0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }

    for(int gasStation =1;gasStation<=k;gasStation++){

        auto it = pq.top();
        pq.pop();

        int index = it.second;
        gasStations[index]++;

        long double diff = arr[index+1]-arr[index];
        long double newSectionlenght = diff / (long double) (gasStations[index] + 1);
        pq.push({newSectionlenght,index});
    }
    return pq.top().first;
}

int main(){

    vector<int> arr = {0,3,7,14};
    //vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}