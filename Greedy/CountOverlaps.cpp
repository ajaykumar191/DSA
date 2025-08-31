#include<bits/stdc++.h>
using namespace std;

int removeOverlappingIntervals(vector<vector<int>>intervals){
    int count = 0;
    sort(intervals.begin(),intervals.end());
    int n = intervals.size();
    if(n==0 || n==1) return 0;

    int prev = intervals[0][1];
    for(int i=1;i<n;i++){
        if(prev>intervals[i][0]){
            count++;
            prev= min(prev,intervals[i][1]);
        }
        else{
            prev =intervals[i][1];
        }
        
    }
    return count;

}

int main(){
    vector<vector<int>>intervals = {{1,2},{2,3},{3,4},{1,3}};
    int count = removeOverlappingIntervals(intervals);
    cout<<count<<endl;
    return 0;
}