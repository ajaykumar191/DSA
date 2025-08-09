#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>asteroids = {1, 2, 3, -10};
    int n = asteroids.size();
    stack<int>st;

    for(int i=0;i<n;i++){
        if(asteroids[i]>0){
            st.push(asteroids[i]);
        }else{

            while(!st.empty() && st.top()>0 && st.top()<-asteroids[i]){
                st.pop();
            }
            if(st.empty()|| st.top()<0){
                st.push(asteroids[i]);
            }
            if(!st.empty() &&  st.top()==-asteroids[i]){
                st.pop();
            }
        }
    }
    int size = st.size();
    vector<int>res(size);
    while(!st.empty()){
        res[size-1]=st.top();
        st.pop();
        size--;
    }

    for(int i =0;i<res.size();i++){
        cout<<res[i]<<" ";
    }



    return 0;
}