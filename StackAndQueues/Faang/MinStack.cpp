#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        vector<vector<int>>st;
        void push(int x){
            if (st.empty()) {
            st.push_back({x, x});
        } else {
            int mini = min(st.back()[1], x);
            st.push_back({x, mini});
        }
            
        }   
        int getMin(){
            if(st.empty()) return -1;
            else{
                return st.back()[1];
            }
        }
        int top(){
            if(st.empty()) return -1;
            else return st.back()[0];
        }
        void pop(){
            if(st.empty()){
                cout<<"Stack is empty "<<endl;
                return;
            }else{
                st.pop_back();
            }
        }
};
int main(){
    
    Stack st;
    st.push(10);
    st.push(2);
    st.push(1);
    st.push(20);

    cout<<st.getMin()<<endl;
    cout<<st.top()<<endl;

    st.pop();
    st.pop();

    cout<<st.getMin()<<endl;
    cout<<st.top()<<endl;

    return 0;
}