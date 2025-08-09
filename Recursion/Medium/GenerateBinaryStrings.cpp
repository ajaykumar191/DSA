#include<bits/stdc++.h>
using namespace std;
void generateAllBinary(int n ,string str,vector<string>&res){
    if(str.size()==n){
        res.push_back(str);
        return;
    }
    generateAllBinary(n,str+'0',res);
    generateAllBinary(n,str+'1',res);
}
int main(){

    int n =4;
    vector<string>res;

    generateAllBinary(n,"",res);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}

//00000 00001 00010 00011 00100 00101 00110 00111 01000 01001 01010 01011 01100 01101 01110 01111 10000 10001 10010 10011 10100 10101 10110 10111 11000 11001 11010 11011 11100 11101 11110 11111 
