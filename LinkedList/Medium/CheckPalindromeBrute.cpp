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


bool checkPalindrome(Node* head){
    stack<int>st;
    Node* temp = head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){

        if(temp->data!=st.top()){
            return false;
        }
        st.pop();
        temp=temp->next;
    }
    return true;
}


int main(){

    vector<int>arr = {1,2,2,1};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);

    if(checkPalindrome(head)){
        cout<<"The given linked list is palindrome "<<endl;
    }else{
        cout<<"The given linked list is not palindrome"<<endl;
    }

    

    return 0;
}