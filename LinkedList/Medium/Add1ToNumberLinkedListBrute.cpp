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
Node* reverseLL(Node* head){
    Node* curr = head;
    Node* prev=NULL;
    while(curr!=nullptr){
        Node* forwardNode = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forwardNode;
    }

    return prev;
}

Node* add1ToLL(Node* head){

    head = reverseLL(head);
    Node* temp = head;
    int sum =1;
    Node* prev =NULL;
    while(temp!=NULL){

        sum+=temp->data;
        int remainder = sum%10;
        sum = sum/10;
        temp->data = remainder;
        prev=temp;
        temp=temp->next;

    }
    if(sum){
        Node* node = new Node(sum);
        prev->next=node;
    }
    head = reverseLL(head);
    return head;

}

int main(){

    Node* head  = new Node(9);
    Node* second = new Node(9);
    Node* third = new Node(9);
    
    head->next = second;
    second->next = third;
    printLinkedList(head);
    Node* node= add1ToLL(head);
    printLinkedList(node);

    return 0;
}