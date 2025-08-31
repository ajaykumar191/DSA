#include<bits/stdc++.h>
using namespace std;

int totalNumberOfRooms(vector<vector<int>>&intervals,int n){
    priority_queue<int , vector<int>, greater<int>>pq;
    if(n==1 || n==0) return 1;
    int rooms = 0;
    sort(intervals.begin(),intervals.end());
    pq.push(intervals[0][1]);

    for(int i=1;i<n;i++){
        while(!pq.empty() && pq.top()<=intervals[i][0]){
            pq.pop();
        }
        pq.push(intervals[i][1]);
        rooms = max(rooms,int(pq.size()));
        
    }
    return rooms;
}

int main(){

    vector<vector<int>>intervals= {{1,5},{2,6},{3,7},{4,8}};
    int n = intervals.size();
    int count = totalNumberOfRooms(intervals,n);
    cout<<"The total number of rooms required are "<<count<<endl;
    return 0;
}