#include<bits/stdc++.h>
using namespace std;


bool anagram(vector<int>&mp){
    for(int i=0;i<26;i++){
        if(mp[i]) return false;
    }
    return true;
}

int search(string & str,string & pattren){
    int count = 0;
    if(str.size()<pattren.size()) return -1;
    
    vector<int>mp(26,0);
    for(char c : pattren){
        mp[c-'a']++;
    }
    for(int i=0;i<pattren.size();i++){
        mp[str[i]-'a']--;
    }
    if(anagram(mp)) count++;

    for(int i=pattren.size();i<str.size();i++){

        mp[str[i]-'a']--;
        mp[str[i-pattren.size()]-'a']++;
        if(anagram(mp)) count++;

    }

    return count;
}


int main(){

    string str = "forxxorfxdofr";
    string pattrens = "for";

    cout<<search(str,pattrens);

}