#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {100, 200, 1, 2, 3, 4};
    int n=arr.size();

    unordered_set<int>st;
    int longest=1;

    for(int num:arr){
        st.insert(num);
    }

    for(auto it:st){

        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x =it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }
    cout<<"The longest lenght is "<<longest<<endl;



}