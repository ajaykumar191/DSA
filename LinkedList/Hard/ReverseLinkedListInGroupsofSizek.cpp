#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }
};
void printLL(Node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* ReverseLinkedListInKGroups(Node* head,int k){
    Node* prev =NULL;
    Node* next = NULL;
    Node* curr = head;

    Node* temp= head;

    for(int i=0;i<k;i++){
        if(!temp) return head;
        temp=temp->next;
    }
    int count =0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(next!=NULL){
        head->next = ReverseLinkedListInKGroups(next,k);
    }

    return prev;
}




int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    Node* seventh = new Node(7);
    Node* eight = new Node(8);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;


    int k =4;
    
    printLL(head);
    head = ReverseLinkedListInKGroups(head,k);
    printLL(head);

    return 0;
}

//LinkedList/Hard/ReverseLinkedListInGroupsofSizekOptimal.cpp