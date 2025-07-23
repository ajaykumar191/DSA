#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "abcde";
    string goal = "cdeab";

    if(s.size()!=goal.size()){
        cout<<"false"<<endl;
        return 0;
    }

    string temp = s+s;
    // cout<<temp<<endl;
    // cout<<s<<endl;
    // cout<<goal<<endl;
    if(temp.find(goal)==-1){
        cout<<"False"<<endl;
    }else{
        cout<<"True"<<endl;
    }
    
    return 0;


}