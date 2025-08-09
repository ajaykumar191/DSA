#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    int n =36;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            st.insert(i);
            st.insert(n/i);
        }
    }

    for(int num:st){
        cout<<num<<endl;
    }
    return 0;
}