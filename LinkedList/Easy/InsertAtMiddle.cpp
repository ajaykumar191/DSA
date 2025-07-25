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
Node* insertAtMiddle(Node* head,int value){
    Node* node = new Node(value);
      if(head==NULL){
        return node;
      }

    Node* slow = head;
    Node* fast = head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node->next=slow->next;
    slow->next=node;
    return head;
}

void printLinkedList(Node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    
    cout<<endl;
}
int main(){

    vector<int>arr = {10,23,45};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
   // head->next->next->next= new Node(arr[3]);

    printLinkedList(head);

    head = insertAtMiddle(head,100);

    printLinkedList(head);

    return 0;
}