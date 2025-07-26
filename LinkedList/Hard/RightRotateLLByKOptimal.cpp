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

Node* rightRotateByK(Node* head,int k){
    if(k==0 || head==NULL || head->next==NULL) return head;

    int lenght =0;
    Node* temp =head;
    Node* lastEnd = NULL;
    while(temp!=NULL){
        lenght++;
        lastEnd=temp;
        temp=temp->next;
    }
    k = k%lenght;
    int remain = lenght-k;
    temp =head;
    Node* prev = NULL;
    while(temp!=NULL && remain--){
        prev=temp;
        temp = temp->next;
    }

    lastEnd->next=head;
    prev->next=NULL;
    head=temp;
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

    int k =5;
    printLL(head);
    head=rightRotateByK(head,k);
    
    printLL(head);

    return 0;
}

//LinkedList/Hard/ReverseLinkedListInGroupsofSizekOptimal.cpp