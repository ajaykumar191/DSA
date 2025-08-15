#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 32;
    if(num>0){
        if(num & (num-1)==0){
            cout<<"The given number is power of 2"<<endl;
            return 0;    
        }else{
            cout<<"The given number is not power of 2"<<endl;
            return 0;
        }
    }
    cout<<"The given number is not power of 2"<<endl;
    

    return 0;
}