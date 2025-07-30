#include<bits/stdc++.h>
using namespace std;

bool helper(string str,unordered_set<string>st){
    if(str.size()==0) return true;

    for(int i=1;i<=str.size();i++){
        if(st.count(str.substr(0,i)) && helper(str.substr(i),st)){
            return true;
        }
    } 
    return false;
}

int main(){

    string str = "leetcode";
    vector<string>arr = {"leet","code"};

    unordered_set<string>set;

    for(string str:arr){
        set.insert(str);
    }

    if(helper(str,set)){
        cout<<"Yes!"<<endl;
    }else{
        cout<<"No!"<<endl;
    }


    return 0;
}