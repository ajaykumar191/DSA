#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={3,3,3,3,5,5,5,2,2,7};
    int n=arr.size();
    unordered_map<int,int>mp;
    for(int num:arr){
        mp[num]++;
    }

    vector<int>freq;
    for(auto it:mp){
        freq.push_back(it.second);
    }
    sort(freq.begin(),freq.end());

    int i =freq.size()-1;
    int count=0;
    int removed =0;
    int half =arr.size()/2;
    while(removed<half){
        count+=1;
        removed+=freq[i--];
    }
    cout<<"The count is "<<count<<endl;
    

    return 0;
}