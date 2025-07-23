#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "words and 987";
    long ans =0;
    int sign =1;
    int n = s.size();
    int i =0;
    while(i<n && s[i]==' '){
        i++;
    }
    if(i<n && s[i]=='+' || s[i]=='-'){
        
        if(s[i]=='-'){
            sign = -1;
        }
        i++;
    }
    while(i<n && isdigit(s[i])){

        ans = ans*10 + (s[i]-'0');

        if(ans>=INT_MAX){
            cout<<"Interger maximum"<<endl;
            return 0;
        }
        if(ans<=INT_MIN){
            cout<<"Integer Minimum"<<endl;
            return 0;
        }
        i++;

    }
    cout<<"The answer is "<<ans*sign<<endl;
    return 0;
}