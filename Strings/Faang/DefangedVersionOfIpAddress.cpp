#include<bits/stdc++.h>
using namespace std;

int main(){

    //string s = "1.1.1.1";
    string s ="255.100.50.0";
    string ans ="";

    for(int i=0;i<s.size();i++){

        if(s[i]=='.'){
            ans+="[.]";
        }else{
            ans+=s[i];
        }
    }
    cout<<ans<<endl;

    return 0;
}