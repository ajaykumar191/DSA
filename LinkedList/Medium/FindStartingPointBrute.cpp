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
Node* findFirstNode(Node* head){
    unordered_map<Node* ,int>mp;

    while(head!=NULL){

        if(mp.find(head)!=mp.end()){
            return head;
        }
        mp[head]=1;
        head=head->next;
    }
    return nullptr;
}


int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 
    Node* firstNode = findFirstNode(head);
    cout<<firstNode->data<<endl;

    return 0;
}