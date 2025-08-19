#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<char,int>mp;
    mp['A']=0;

    if(mp.count('A')){
        cout<<"A is present in the map "<<endl;
    }
    cout<<mp.count('A')<<endl;
    return 0;
}