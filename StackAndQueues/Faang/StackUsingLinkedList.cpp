#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int x){
            data = x;
            next=NULL;
        }
};


class Stack{
    public:
        Node* head;
    
        Stack(){
            head=NULL;
        }

        bool empty(){
            if(head==NULL)return true;
            else return false;
        }
        void push(int x){
            Node* node = new Node(x);
            node->next = head;
            head=node;
        }
        void pop(){
            if(empty()){
                cout<<"Stack is empty "<<endl;
                return;
            }else{
                Node* temp = head;
                head=head->next;
                delete temp;
            }
        }
        int top(){
            if(empty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }else{
                return head->data;
            }
        }
};

int main(){

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "After pop, top: " << st.top() << endl;

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}