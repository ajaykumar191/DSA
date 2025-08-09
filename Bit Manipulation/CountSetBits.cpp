#include<bits/stdc++.h>
using namespace std;

int main(){

    int num =5;
    int count =0;
    while (num>0){
        if(num&1)count++;
        num>>=1;
    }

    cout<<"The total number of bits are "<<count<<endl;
    

    return 0;
}