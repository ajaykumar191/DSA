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

Node* segregateEvensAndOdds(Node* head){
    vector<int>evens;
    vector<int>odds;
    Node* curr = head;
    
    while(curr!=NULL){
        if(curr->data%2==0){
            evens.push_back(curr->data);
        }else{
            odds.push_back(curr->data);
        }
        curr=curr->next;
    }

    curr = head;
    for(int i=0;i<evens.size();i++){
        curr->data = evens[i];
        curr=curr->next;
    }
    for(int i=0;i<odds.size();i++){
        curr->data = odds[i];
        curr=curr->next;
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
    head = segregateEvensAndOdds(head);
    printLinkedList(head);
    return 0;
}

//LinkedList/Medium/SegregateOddsAndEvenNodesOptimal.cpp