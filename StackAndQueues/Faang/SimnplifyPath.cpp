#include<bits/stdc++.h>
using namespace std;

// Input: path = "/home/"

// Output: "/home"

// Input: path = "/home//foo/"

// Output: "/home/foo"

// Input: path = "/home/user/Documents/../Pictures"

// Output: "/home/user/Pictures"

// Input: path = "/../"

// Output: "/"

// Input: path = "/.../a/../b/c/../d/./"

// Output: "/.../b/d"

int main(){

    string path = "/home/user/Documents/../Pictures";
    vector<string>components;
    stringstream ss(path);
    string comp;
    vector<string>st;
    while(getline(ss,comp,'/')){
        cout<<comp<<endl;

        if(comp=="" || comp =="."){
            continue;
        }
        if(comp==".."){
            if(!st.empty()){
                st.pop_back();
            }
        }else{
            st.push_back(comp);
        }
    }

    string simplifiedPath="";

    for(int i=0;i<st.size();i++){
        //cout<<st[i]<<" ";
        simplifiedPath+="/"+st[i];
    } 
    cout<<endl;  
    cout<<simplifiedPath<<endl;
    return 0;
}