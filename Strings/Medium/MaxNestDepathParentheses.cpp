#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "(1+(2*3)+((8)/4))+1";
    int n = s.size();
    int depth  = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){

            depth ++;
            maxi = max(depth ,maxi);

        }else if(s[i]==')'){
            depth  --;
        }
    }

    cout<<"The max depth is "<<maxi<<endl;


    return 0;
}