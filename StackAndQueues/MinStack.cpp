#include<bits/stdc++.h>
using namespace std;
class Minstack{ 
    public:
        vector<vector<int>>st;

        void push(int x){
            int max_elem =st.empty()?x: getMax();
            if(max_elem<x){
                max_elem=x;
            }
            st.push_back({x,max_elem});
        }

        void pop(){
            if(st.empty()){
                cout<<"The stack is empty "<<endl;
                return;
            }else{
                st.pop_back();
            }
        }

        int getSize(){
            return st.size();
        }

        int top(){
            if(st.empty()){
                cout<<"The stack is empty "<<endl;
                return -1;
            }else{
                return st.back()[1];
            }
        }
        int getMax(){
            if(st.empty()){
                cout<<"The stack is empty "<<endl;
                return -1;
            }else{
                return st.back()[1];
            }
        }

};
int main(){

     
    return 0;
}