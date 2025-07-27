#include<bits/stdc++.h>
using namespace std;

// A number is good if it contains 
//even index = 0,2,4,6,8
//odd index = 2,3,5,7

//else not

bool isPrime(int digit){

    if(digit == 2 || digit == 3 || digit == 5 || digit == 7){
        return true;
    }
    return false;
}


bool isGoodNumber(int num){
    string str = to_string(num);
    int n = str.size();

    for(int i=0;i<n;i++){
        int digit =str[i]-'0';
        if(i%2==0){
            if(digit%2!=0) return false;
        }
        else{
            if(!isPrime(digit)){
                return false;
            }
        }
    }
    return true;
}

int main(){

    int num = 1453;

    if(isGoodNumber(num)){
        cout<<"The given number is good number "<<endl;
    }else{
        cout<<"The given number is not good number "<<endl;
    }
    
    


    return 0;
}