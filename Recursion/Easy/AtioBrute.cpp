#include<bits/stdc++.h>
using namespace std;


int myAtio(int start ,int end ,int sign ,long result,string str){
    while(start<end && isdigit(str[start])){
        int digit = str[start]-'0';

        result = (result*10) + digit;

        if(sign*result<=INT_MIN) return INT_MIN;
        if(sign*result>=INT_MAX) return INT_MAX;
        start++;
    }

    return sign*result;

}

int main(){

    string str = "4193 with words";
    int i=0;
    int n = str.size();

    while(i<n && str[i]==' '){
        i++;
    }
    int sign =1;
    if(i<n && (str[i]=='+' || str[i]=='-')){
        if(str[i]=='-'){
            sign=-1;
        }
        i++;
    }

    long result = 0;
    int ans = myAtio(i,n,sign,result,str);
    cout<<"The ans is "<<ans<<endl;
    return 0;
}