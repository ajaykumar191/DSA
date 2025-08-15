#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k = 3;
    int n = arr.size();
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        
        while(!dq.empty() && arr[i]>= arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);

    for(int i=k;i<n;i++){

        while(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }
         while(!dq.empty() && arr[i]>= arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}