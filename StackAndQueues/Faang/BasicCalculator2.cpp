#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "3+2*2";
    int n = str.size();

    long long result = 0;
    long long number = 0;
    char lastOperator = '+';
    stack<long long>st;

    for(int i=0;i<n;i++){
        char c = str[i];

        if(isdigit(c)){
            number = (number*10)+c-'0';
        }
        if((!isspace(c) && !isdigit(c))  || i==n-1 ){
            if(lastOperator=='+'){
                st.push(number);
            }
            else if(lastOperator == '-'){
                st.push(-number);
            }else if(lastOperator == '*'){
                long long top = st.top();
                st.pop();
                st.push(number*top);
            }else if(lastOperator == '/'){
                long long top = st.top();
                st.pop();
                st.push(number/top);
            }
            lastOperator=c;
            number = 0;
        }
    }

    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    cout<<"Result "<<result<<endl;
    return 0;
}