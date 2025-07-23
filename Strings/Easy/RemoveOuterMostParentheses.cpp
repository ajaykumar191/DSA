#include<bits/stdc++.h>
using namespace std;

int main(){

    //string s = "(()())(())";
    string s = "(()())(())(()(()))";
    int n = s.size();

    string res="";
    int count =0;

    for(char c:s){

        if(c=='(' && count++>0) res+=c;
        if(c==')' && count-->1) res+=c;
    }

    for(int i =0;i<res.size();i++){
        cout<<res[i];
    }
    return 0;
}