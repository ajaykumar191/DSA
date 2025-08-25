#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]<b[1]) return true;
    else if (a[1]>b[1]) return false;
    else if(a[2]<b[2]) return true;
    return false;
}
vector<int>maxmeeting(int n, vector<int>&start,vector<int>&end){
    vector<int>ans;
    vector<vector<int>>meetings;

    for(int i=0;i<n;i++){
        meetings.push_back({start[i],end[i],i+1});
    }
    sort(meetings.begin(),meetings.end(),cmp);

    for(int i=0;i<meetings.size();i++){
        cout<<meetings[i][0]<<" "<<meetings[i][1]<<" "<<meetings[i][2]<<" "<<endl;
    }

    int prevEnd = meetings[0][1];
    ans.push_back(meetings[0][2]);
    for(int i=1;i<n;i++){
        if(prevEnd<meetings[i][0]){
            ans.push_back(meetings[i][2]);
            prevEnd = meetings[i][1];
        }
    }
    return ans;
}

int main(){

    int n = 6;
   vector<int>start = {1,3,0,5,8,5};
   vector<int>end = {2,4,5,7,9,9};

   vector<int>meeting = maxmeeting(n , start,end);
   for(int i=0;i<meeting.size();i++){
    cout<<meeting[i]<<" ";
   }
    return 0;
}