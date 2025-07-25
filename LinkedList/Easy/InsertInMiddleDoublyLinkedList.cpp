#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};

void traverseLinkedList(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


Node* insertInMiddle(Node* head ,int k){
    Node* node = new Node(k);
    if(head==nullptr){
        return node;
    }
    else{
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while(fast!=NULL&& fast->next!=NULL){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=node;
        
        node->prev = prev;
        node->next=slow;
        if(slow!=NULL){
            slow->prev=node;
        }
        
    }
    return head;
}
int main(){

    vector<int>arr = {10,23,45,22};
    Node* head = new Node(arr[0]);

    Node* node1 = new Node(arr[1]);
    head->next= node1;
    node1->prev=head;

    Node* node2 = new Node(arr[2]);
    node1->next = node2;
    node2->prev = node1;

    Node* node3 = new Node(arr[3]);
    node2->next = node3;
    node3->prev = node2;

    traverseLinkedList(head);
    head=insertInMiddle(head,200);
    traverseLinkedList(head);


    return 0;
}