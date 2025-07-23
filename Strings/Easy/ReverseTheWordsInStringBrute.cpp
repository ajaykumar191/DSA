#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<s<<endl;

    s+=" ";
    string temp="";
    stack<string>st;

    for(char c : s){
        if(c==' '){
            st.push(temp);
            temp="";
        }else{
            temp+=c;
        }
    }
    string ans="";

    while(st.size()>1){
        if (!ans.empty()) ans += " ";  
        ans += st.top();
        st.pop();
    }
    if (!ans.empty()) ans += " ";  
        ans += st.top();
        st.pop();

    cout<<"After reversing words: "<<endl;
    cout<<ans;
    return 0;

}

//Strings/Easy/ReverseTheWordsInStringOptimal.cpp