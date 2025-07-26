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


Node* rightRotateByOne(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    Node* newhead = temp->next;
    temp->next=NULL;
    newhead->next=head;
    head=newhead;
    return head;
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

    int k =1;
    printLL(head);
    for(int i=0;i<k;i++){
        head=rightRotateByOne(head);
    }   
    
    printLL(head);

    return 0;
}

//LinkedList/Hard/ReverseLinkedListInGroupsofSizekOptimal.cpp