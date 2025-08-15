#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr={-8, 2, 3, -6, 10};
    int n = arr.size();
    int k = 2;
    vector<int>ans;
    deque<int>q;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push_back(i);
        }
    }
    if(!q.empty()){
        ans.push_back(arr[q.front()]);
    }else{
        ans.push_back(0);
    }
    for(int i=k;i<n;i++){
        if(!q.empty() && q.front()<=i-k){
            q.pop_front();
        }
        if(arr[i]<0){
            q.push_back(i);
        }
        if(!q.empty()){
        ans.push_back(arr[q.front()]);
        }else{
            ans.push_back(0);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}