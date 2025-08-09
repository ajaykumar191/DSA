#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 534976;
    string str = to_string(n);

    int index= -1;
    for(int i=str.size()-2;i>=0;i--){
        if(str[i]<str[i+1]){
            index = i;
            break;
        }
    }

    // if(index==-1){
    //     //reverse(str.begin(),str.end()); 
    // }

    int i = 0;
    for( i=str.size()-1;i>=0;i--){
        if(str[i]>str[index]){
            break;
        }
            
           
    }
    swap(str[i],str[index]);

    reverse(str.begin()+index+1,str.end());

    long long nn = stoll(str);
    cout<<nn<<endl;
    return 0;
}