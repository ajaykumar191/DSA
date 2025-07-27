#include<bits/stdc++.h>
using namespace std;

long long calculatePower(int base ,int exp){
    long long res =1;
    while(exp>0){
        if(exp%2==1){
             res*=base;
        }
        base *=base;
        exp = exp/2;
    }
    return res;
}


int main(){

    int n = 5;

    int evenPos = (n)/2 + n%2;
    int oddPos = n/2;

    long long res = calculatePower(5,evenPos) * calculatePower (4,oddPos);

    cout<<"The total number of good number are "<<res<<endl;
    //cout<<calculatePower(2,3)<<endl;
    //cout<<calculatePower(5,2)<<endl;
    //cout<<calculatePower(3,3)<<endl;


    return 0;
}