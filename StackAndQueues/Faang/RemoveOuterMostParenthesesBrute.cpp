#include<bits/stdc++.h>
using namespace std;
int main(){

    //string s = "(()())(())";
    string s = "()()()";
    string ans = "";
    int opened = 0;

    for(char ch:s){
        if(ch == '(' && opened++ >0) ans.push_back(ch);
        if(ch==')' && opened-- >1) ans.push_back(ch);
    }
    cout<<ans<<endl;
}