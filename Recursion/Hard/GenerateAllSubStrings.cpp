#include<bits/stdc++.h>
using namespace std;

void generateAllSubstrings(int index,string str,string &ds,vector<string>&ans){

    ans.push_back(ds);
    if(index==str.size()){
        return;
    }
    for(int i=index;i<str.size();i++){
        ds.push_back(str[i]);
        generateAllSubstrings(i+1,str,ds,ans);
        ds.pop_back();
    }

}

int main(){

    string str = "hello";
    vector<string>ans;
    string ds ="";

    generateAllSubstrings(0,str,ds,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }


    return 0;
}