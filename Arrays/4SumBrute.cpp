#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={1,0,-1,0,-2,2};
    int n=arr.size();
    int k=0;

    set<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;k<n;k++){

                    int sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==0){
                        vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
    }

    for(auto it:ans){

        for(int i=0;i<it.size();i++){
            cout<<it[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}