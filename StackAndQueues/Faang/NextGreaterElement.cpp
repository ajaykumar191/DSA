#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "536947";
    int n = s.size();
    int i=0;
    for(i=n-2;i>=0;i++){
        if(s[i]<s[i+1]) break;
    }

    int j=n-1;
    for( j=n-1;j>i;j--){
        if(s[j]>s[i]) break;
    }

    swap(s[i],s[j]);
    reverse(s.begin()+i+1,s.end());

    cout<<s<<endl;

    return 0;
}