#include<bits/stdc++.h>
using namespace std;
int main(){

    string str ="(1+(4+5+2)-3)+(6+8)";
    int n = str.size();
    long long result = 0;
    int number = 0;
    int sign = 1;
    stack<int>st;

    for(int i=0;i<n;i++){
        if (str[i] == ' ') continue;

        if(isdigit(str[i])){
            number= (number*10)+str[i]-'0';
        }
        else if(str[i]=='+'){
            result+=(sign*number);
            number=0;
            sign=1;
        }else if(str[i]=='-'){
            result+=(sign*number);
            number = 0;
            sign = -1;
        }else if(str[i]=='('){
            st.push(result);
            st.push(sign);
            result = 0;
            sign = 1;
        }else if(str[i]==')'){
            result+=(sign*number);
            number = 0;
            int last_sign = st.top();st.pop();
            int last_result = st.top();st.pop();
            result = last_result+(last_sign*result);
        }
    }

    result+=(sign*number);
    cout<<"The result is "<<result<<endl;
    return 0;
}