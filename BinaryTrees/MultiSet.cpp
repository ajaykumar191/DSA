#include<bits/stdc++.h>
using namespace std;
int main(){

    multiset<int>st;
    st.insert(10);
    st.insert(10);
    st.insert(20);
    st.insert(40);
    st.insert(30);

    for(auto it:st){
        cout<<it<<" ";
    }
    return 0;
}