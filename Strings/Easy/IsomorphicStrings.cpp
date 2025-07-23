#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "egg";
    string t = "add";

    if(s.size()!=t.size()){
        cout<<"Not isomorphic"<<endl;
        return 0;
    }
    vector<int>mp1(256,-1);
    vector<int>mp2(256,-1);

    for(int i=0;i<s.size();i++){

        char ch1 = s[i];
        char ch2 = t[i];

        if(mp1[ch1]==-1 && mp2[ch2]==-1){
            mp1[ch1]=ch2;
            mp2[ch2]=ch1;
        }else if(mp1[ch1]!=ch2 || mp2[ch2]!=ch1){
            cout<<"Not isomorphic"<<endl;
            return 0;
        }
    }

    cout<<"The strings are isomorphic"<<endl;

    return 0;
}