#include<bits/stdc++.h>
using namespace std;
bool canAttendMeetings(vector<vector<int>> &intervals){
    int n = intervals.size();
    if(n==0 || n==1) return true;
    sort(intervals.begin(),intervals.end());
    for(int i=1;i<n;i++){

        if(intervals[i-1][1]>intervals[i][0]){
            return false;
        }
    }
    return true;
}
int main(){

    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};

    if(canAttendMeetings(intervals)){
        cout<<"Yes "<<endl;
    }else{
        cout<<"No "<<endl;
    }

}