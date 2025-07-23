#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "welcome to geeksforgeeks";
    string ans = "";
    for(int i=0;i<str.size();i++){

        if(str[i]!='a' &&  str[i] !='e' && str[i]!='i' && str[i]!='o' 
            && str[i]!='u'&&str[i]!='A' &&  str[i] !='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            ans+=str[i];
        }
    }
    cout<<ans<<endl;

    return 0;
}