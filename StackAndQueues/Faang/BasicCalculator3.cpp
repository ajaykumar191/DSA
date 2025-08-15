#include <bits/stdc++.h>
using namespace std;

int calculate(string s) {
    long long result = 0;
    long long number = 0;
    stack<long long>st;
    char lastSign = '+';
    int n = s.size();
    for(int i=0;i<n;i++){
        char c = s[i];
        if(isdigit(c)){
            number = (number*10)+c-'0';
        }

        if(c=='('){
            int j=i+1;
            int count = 1;
            while(j<n && count>0){
                if(s[j]=='(')count++;
                if(s[j]==')')count--;
                j++;
            }

            string str = s.substr(i+1,j-i-1);
            number = calculate(str);
            i=j-1;
        }

        if((!isdigit(c) && !isspace(c)) || i==n-1){
            if(lastSign=='+'){
                st.push(number);
            }else if(lastSign == '-'){
                st.push(-number);
            }
            else if(lastSign == '*'){
                long long top = st.top();st.pop();
                st.push(top*number);
            }else if(lastSign == '/'){
                long long top = st.top();st.pop();
                st.push(top/number);
            }
            lastSign = c;
            number = 0;
        }
    }

    while(!st.empty()){
        result+=st.top();st.pop();
    }
    return result;
}

int main(){
    cout << calculate("2*(5+5*2)/3+(6/2+8)") << endl; // Expected 21
    cout << calculate("(2+6*3+5-(3*14/7+2)*5)+3") << endl; // Expected -12
}
