#include<bits/stdc++.h>
using namespace std;

void generateParenthesis(string str,int openCount,int closeCount ,vector<string>&result,int n){
    if(openCount == n && closeCount == n){
        result.push_back(str);
        return ;
    }

    if(n>openCount){
        generateParenthesis(str+'(',openCount+1,closeCount,result,n);
    }
    if(openCount>closeCount){
        generateParenthesis(str+')',openCount,closeCount+1,result,n);
    }
}

int main(){

    vector<string>result;
    int n = 3;

    generateParenthesis("",0,0,result,n);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }


    return 0;
}