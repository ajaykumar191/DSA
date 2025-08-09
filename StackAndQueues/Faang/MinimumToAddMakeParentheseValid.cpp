#include<bits/stdc++.h>
using namespace std;
int main(){

    //string s = "())";
    string s = "(((";

    int open = 0;
    int close = 0;

    for(char ch :s){
        if(ch =='('){
            open++;
        }else{
            if(open>0)open--;
            else close++;
        }
    }
    cout<<"The total count is "<<open+close<<endl;
    return 0;
}