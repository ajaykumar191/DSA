#include<bits/stdc++.h>
using namespace std;

int main(){

    string num = "35427";
    int n = num.size();
    for(int i=n-1;i>=0;i--){

        int digit = num[i]-'0';
        if(digit%2){
            cout<<num.substr(0,i+1);
            return 0;
        }
    }
    cout<<"No such numbers were found! ";
    return 0;
}