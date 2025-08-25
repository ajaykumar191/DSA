#include<bits/stdc++.h>
using namespace std;

bool canServe(vector<int>bills){

    int fiveCount = 0;
    int tenCount = 0;
    int twentyCount = 0;

    for(int bill: bills){

        if(bill==5){
            fiveCount++;
        }else if(bill ==10){
            if(fiveCount>0){
                fiveCount--;
                tenCount++;
            }else{
                return false;
            }
        }else if(bill == 20){
            if(fiveCount>0 && tenCount>0){
                twentyCount++;
                fiveCount--;
                tenCount--;
            }else if(fiveCount>2){
                fiveCount-=3;
                twentyCount++;
            }else{
                return false;
            }
        }
    }
    return true;

}

int main(){

    vector<int>bills={5,5,5,10,20};

    if(canServe(bills)){
        cout<<"Can be served"<<endl;
    }else{
        cout<<"Cannot be served"<<endl;
    }

    return 0;
}