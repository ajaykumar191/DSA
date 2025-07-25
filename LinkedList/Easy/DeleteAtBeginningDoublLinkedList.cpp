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

Node* deleteAtBegining(Node* head){
    if(head==NULL){
        return NULL;
    }else if(head->next==NULL){
        delete head;
        return NULL;
    }else{
        Node* temp = head;
        Node* newHead = head->next;
        newHead->prev=NULL;
        temp->next=NULL;
        head=newHead;

        delete temp;
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
    head = deleteAtBegining(head);
    traverseLinkedList(head);

    return 0;
}