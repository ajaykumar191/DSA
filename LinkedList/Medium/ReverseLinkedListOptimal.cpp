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
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev = NULL;
    
    while(head!=NULL){
        Node* nextNode = head->next;
        head->next=prev;
        prev=head;
        head=nextNode;
    }
    return prev;
}


int main(){

    vector<int>arr = {10,23,45,100};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);
    head= reverseLinkedList(head);
    printLinkedList(head);
    

    return 0;
}