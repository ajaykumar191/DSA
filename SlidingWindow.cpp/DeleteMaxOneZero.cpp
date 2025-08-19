#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int>arr={0,1,1,1,0,1,1,0,1};
    int n = arr.size();
    int count = 0;
    int maxLen = 0;
    int l = 0;
    int r = 0;
    
    while(r<n){
        if(arr[r]==0) count++;

        while(count>1){
            if(arr[l]==0){
                count--;
                
            }
            l++;
        }
        maxLen = max(maxLen, r-l+1);
        r++;

    }

    cout<<"The max consecutive 1's after deleting the one 0 is "<<maxLen-1<<endl;
    return 0;
}