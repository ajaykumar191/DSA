#include <bits/stdc++.h>
using namespace std;



class BruteForceStringCompare{
    public:
        stack<char>st1,st2;
        bool stringCompare(string s1,string s2){
            for(int i=0;i<s1.size();i++){
                if(!st1.empty() && s1[i]=='#'){
                    st1.pop();
                }else if(s1[i]!='#'){
                    st1.push(s1[i]);
                }
            }

            for(int i=0;i<s2.size();i++){
                if(!st2.empty() && s2[i]=='#'){
                    st2.pop();
                }else if(s2[i]!='#'){
                    st2.push(s2[i]);
                }

            }

            if(st1.size()!=st2.size()){
                return false;
            }else{
                while(!st1.empty()){
                    if(st1.top()!=st2.top()){
                        return false;
                    }
                    else{
                        st1.pop();
                        st2.pop();
                    }
                }
            }
            return true;
            
        }

    
};

class OptimizedStringCompare{

};


int main(){



    return 0;
}