#include<bits/stdc++.h>
using namespace std;

void generatAllSubsequences(int index,string &str,string&ds,vector<string>&ans,int n){
    
    if(index==n){
        ans.push_back(ds);
        return;
    }

    ds.push_back(str[index]);
    generatAllSubsequences(index+1,str,ds,ans,n);
    ds.pop_back();
    generatAllSubsequences(index+1,str,ds,ans,n);

}

int main(){

    string str = "aabc";
    int n = str.size();
    int index = 0;  
    vector<string>ans;
    string ds = "";

    generatAllSubsequences(index,str,ds,ans,n);

    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;
}