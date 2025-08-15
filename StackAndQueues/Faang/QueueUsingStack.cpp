#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        stack<int>st;

        void insert(int x){
            if(st.empty()){
                st.push(x);
                return;
            }
            int temp = st.top();
            st.pop();
            insert(x);
            st.push(temp);
        }
        bool isEmpty(){
            return st.empty();
        }
        int pop(){
            if(st.empty()){
                cout<<"The queue is empty"<<endl;
                return -1;
            }else{
                int top = st.top();
                st.pop();
                return top;
            }
        }

        int top(){
            if(st.empty()){
                cout<<"The stack is empty "<<endl;
                return -1;
            }else{
                return st.top();
            }
        }
};

int main(){

    return 0;
}