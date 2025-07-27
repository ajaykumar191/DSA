#include<bits/stdc++.h>
using namespace std;


int helper(string str,int i,int n,int sign ,long result){

    if(i>=n || !isdigit(str[i])) return sign*result;

    int digit = str[i]-'0';
    result = result*10 + digit;

    if(sign*result<=INT_MIN) return INT_MIN;
    if(sign*result>=INT_MAX) return INT_MAX;

    return helper(str,i+1,n,sign,result);
}

int myAtoiRecursive(string str){
    long ans =0;
    int i=0;
    int n = str.size();
    int sign =1;
    long result=0;
    while(i<n && str[i]==' '){
       i++;
    }
    if(i<n && (str[i]=='+' || str[i]=='-')){
        if(str[i]=='-'){
            sign =-1;
        }
        i++;
    }

    return helper(str,i,n,sign,result);
}

int main(){

    string str = "   -42";
    int ans = myAtoiRecursive(str);
    cout << "The ans is " << ans << endl;
    return 0;
    return 0;
}