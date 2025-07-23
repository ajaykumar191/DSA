#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "MCMXCIV";
    unordered_map<char,int>mp;

    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int number =0;
    for(int i=0;i<str.size();i++){
        if(mp[str[i]]<mp[str[i+1]]){
            number-=mp[str[i]];
        }else{
            number+=mp[str[i]];
        }
    }
    cout<<"The number is "<<number<<endl;
}