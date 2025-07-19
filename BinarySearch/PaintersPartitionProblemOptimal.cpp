#include<bits/stdc++.h>
using namespace std;
int countPainters(vector<int>&boards,int paintArea){
    int painters =1;
    int totalPaint =0;

    for(int i=0;i<boards.size();i++){
        if(totalPaint+boards[i]<=paintArea){
            totalPaint+=boards[i];
        }else{
            painters++;
            totalPaint=boards[i];
        }
    }
    return painters;
}

int findLargestMinDistance(vector<int>&boards,int k){
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);

    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int painters = countPainters(boards,mid);

        if(painters<=k){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    int ans = findLargestMinDistance(boards, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}