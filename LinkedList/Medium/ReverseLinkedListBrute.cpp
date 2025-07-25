#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next=NULL;
        }
};

void printLinkedList(Node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    
    cout<<endl;
}

Node* reverseLinkedList(Node* head){
    stack<int>st;
    Node* temp = head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }

    temp= head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }

    return head;
}


int main(){

    vector<int>arr = {10,23,45,100};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);
    head = reverseLinkedList(head);
    printLinkedList(head);
    

    return 0;
}