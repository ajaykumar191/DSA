#include<bits/stdc++.h>
using namespace std;

int solve(string str,int n){
    long long result = 0;
    long long number = 0;
    stack<long long >st;
    char lastSign = '+';

    for(int i=0;i<n;i++){
        char ch = str[i];
        if(isdigit(ch)){
            number = (number*10)+ch-'0';
        }
        if(ch=='('){

            int count = 1;
            int j= i+1;
            while(j<n && count>0){
                if(str[j]=='(')count++;
                if(str[j]==')')count--;
                j++;
            }
            string s = str.substr(i+1,j-i-1);
            number = solve(s,s.size());
            i = j-1;
        }
        if((!isdigit(ch) && !isspace(ch))|| i==n-1){

            if(lastSign=='+'){
                st.push(number);
            }else if(lastSign=='-'){
                st.push(-number);
            }else if (lastSign == '*') {
                long long top = st.top(); st.pop();
                st.push(top * number);
            } else if (lastSign == '/') {
                long long top = st.top(); st.pop();
                st.push(top / number);
            }
            lastSign=ch;
            number=0;
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    return result;
} 


int main(){
    string str  = "2*(3+(4*5))";
    int n = str.size();

    int ans = solve(str,n);
    cout<<"The result is "<<ans<<endl;
}