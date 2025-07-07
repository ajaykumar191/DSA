#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    sort(arr.begin(),arr.end());
    int n = arr.size();
    vector<vector<int>> triplets;  

    for(int i=0;i<n;i++){
        
        if(i!=0 && arr[i]==arr[i-1]) continue;
        
        int j=i+1;
        int k=n-1;

        while (j<k){

           int sum=arr[i]+arr[j]+arr[k];

           if(sum>0){
            k--;
           }else if(sum<0){
            j++;
           }else{
            vector<int>temp={arr[i],arr[j],arr[k]};
            triplets.push_back(temp);
            j++;
            k--;
            while(j < k && arr[j] == arr[j - 1]) j++;
            while(j < k && arr[k] == arr[k + 1]) k--;

           }
        }
    }

    for(int i=0;i<triplets.size();i++){
        for(int j=0;j<triplets[i].size();j++){
            cout<<triplets[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

