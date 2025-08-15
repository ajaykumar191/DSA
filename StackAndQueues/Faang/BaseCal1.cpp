#include<bits/stdc++.h>
using namespace std;


int main(){
    string str ="1000 - (200 + 300) + 50";
    int n = str.size();
    long long result = 0;
    int number = 0;
    int sign = 1;
    stack<int>st;
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            number = (number*10)+str[i]-'0';
        }
        else if(str[i]=='+'){
            result+=(sign*number);
            sign=1;
            number=0;
        }else if(str[i]=='-'){
            result+=(sign*number);
            sign = -1;
            number = 0;
        }else if(str[i]=='('){
            result+=(sign*number);
            st.push(result);
            st.push(sign);
            sign=1;
            result = 0;
        }else if(str[i]== ')'){
            result+=(sign*number);
            number = 0;
            int last_sign = st.top();st.pop();
            int last_result = st.top();st.pop();

            result = last_result+(last_sign*result);
        }
    }
    result+=(sign*number);
    cout<<"Result "<<result<<endl;
    return 0;
}