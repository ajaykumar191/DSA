#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr = {4,1,2,2,1};
    unordered_map<int,int>mp;
    for(int num:arr){
        mp[num]++;
    }
    for(auto it:mp){
        if(it.second%2){
            cout<<"The number that appears odd number of times is "<<it.first<<endl;
        }
    }

}


//Bit Manipulation/FindTheNumbersAppearOddNumberOfTimesOptimal.cpp