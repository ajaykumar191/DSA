#include<bits/stdc++.h>
using namespace std;
int countTotalStops(vector<vector<int>>&stations,int target,int startFuel,int n){
    priority_queue<int>pq;
    int fule = startFuel;
    int i =0;
    int stops = 0;
    while(fule<target){
        while(i<n && stations[i][0]<=fule){
            pq.push(stations[i][1]);
            i++;
        }
        if(pq.empty()) return -1;
        
        fule+=pq.top();
        pq.pop();
        stops++;
    }
    return stops;
   
}
int main(){

    int target =100;
    int startFuel = 10;
    vector<vector<int>>stations = {{10,60},{20,30},{30,30},{60,40}};
    int n = stations.size();
    int totalStops = countTotalStops(stations,target,startFuel,n);
    cout<<totalStops<<endl;
    return 0;
}