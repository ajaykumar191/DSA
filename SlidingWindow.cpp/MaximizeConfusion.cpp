#include<bits/stdc++.h>
using namespace std;

int findMaxLen(string&ansKey,int k,char c){
    int count = 0;
    int maxLen = 0;
    int n = ansKey.size();
    int l =0;
    for(int r=0;r<n;r++){
        if(ansKey[r]!=c){
            count++;
        }

        while(count>k){
            if(ansKey[l]==c) count--;
            l++;
        }
        maxLen= max(maxLen,r-l+1);
    }
    return maxLen;
}


int main(){

    string answerKey = "TTFF";
    int k = 2;
    int maxlen = max(findMaxLen(answerKey,k,'T'),findMaxLen(answerKey,k,'F'));
    cout<<maxlen<<endl;
    return 0;
}