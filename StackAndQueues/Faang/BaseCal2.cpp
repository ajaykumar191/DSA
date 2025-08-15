#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "100+200+3";
    int n = str.size();
    long long number = 0;
    long long result = 0;
    char lastSign = '+';
    stack<long long>st;

    for(int i=0;i<str.size();i++){
        char ch = str[i];

        if(isdigit(ch)){
            number = (number*10) +ch-'0';
        }
        cout<<"Number "<<number<<endl;
        if((!isdigit(ch) && !isspace(ch)) || i==n-1){
            
            if(lastSign=='+'){
                st.push(number);
            }else if(lastSign == '-'){
                st.push(-number);
            }else if(lastSign == '*'){
                int lastNumber = st.top();st.pop();
                st.push(lastNumber*number);
            }else if(lastSign == '/'){
                int lastNumber = st.top();st.pop();
                st.push(lastNumber/number);
            }
            lastSign=ch;
            number =0;
        }
        
       
    }

    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    
    cout<<"Result "<<result<<endl;

    return 0;
}