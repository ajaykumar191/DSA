#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        queue<int>q;
    
    bool empty(){
        return q.empty();
    }
    int top(){
        if(q.empty()){
            cout<<"Stack is empty "<<endl;
            return -1;
        }else{
            return q.front();
        }
    }
    int size(){
        return q.size();
    } 

    void pop(){
        if(q.empty()){
            cout<<"The queue is empty "<<endl;
          
        }else{
            q.pop();
        }
    }
    void push(int x){
        int size = q.size();
        q.push(x);
        for(int i=0;i<size;i++){
            q.push(q.front());
            q.pop();
        }
        
    }
};
int main(){

     Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl; // 30
    st.pop();
    cout << "Top after pop: " << st.top() << endl; // 20

    st.push(40);
    cout << "Top now: " << st.top() << endl; // 40

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}