#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1 = "eidbaoo", s2 = "ab";
    if(s2.size()>s1.size()) {
        cout<<"No permutation exixts"<<endl; return 0;
    }
    vector<int>mp1(26,0),mp2(26,0);
    for(char c:s2){
        mp1[c-'a']++;
    }
     int k = s2.size();
    for(int i=0;i<k;i++){
        mp2[s1[i]-'a']++;
    }
   
    if(mp1==mp2) {
        cout<<"Exists "<<endl; return 0;
    }

    for(int i=k;i<s1.size();i++){
        mp2[s1[i-k]-'a']--;
        mp2[s1[i]-'a']++;
        if(mp1==mp2){
            cout<<"Exists "<<endl; return 0;
        }
    }
    cout<<"No permutation exists"<<endl;
}