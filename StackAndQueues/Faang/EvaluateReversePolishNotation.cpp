#include<bits/stdc++.h>
using namespace std;
int calculate(int a ,int b ,string sign){
    if(sign=="+"){
        return a+b;
    }else if(sign=="-"){
        return a-b;
    }else if(sign=="*"){
        return a*b;
    }else{
        return a/b;
    }
}
int main(){

    //vector<string>tokens = {"2","1","+","3","*"};
    //vector<string>tokens = {"4","13","5","/","+"};
    vector<string>tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    int n = tokens.size();
    stack<int>st;
    for(string str: tokens){
        if(str == "+" || str =="-" || str =="*" || str =="/"){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            int result = calculate(a,b,str);
            st.push(result);
        } 
        else{
            st.push(stoi(str));
        }
    }

    cout<<st.top()<<endl;
    return 0;
}