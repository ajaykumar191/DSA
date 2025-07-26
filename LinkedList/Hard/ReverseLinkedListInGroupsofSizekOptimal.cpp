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

Node* reverseLL(Node* head){
    Node* prev=NULL;
    Node* curr =head;
    while(curr!=NULL){
        Node* nextNode = curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

Node* getKthNode(Node* temp,int k){
    k =k-1;
    while(temp!=NULL && k--){
        temp = temp->next;
    }
    return temp;
}

Node* ReverseLinkedListInKGroups(Node* head,int k){
   Node* prevLast = NULL;
   Node* newHead = NULL;
   Node* temp= head;

   while(temp!=NULL){
    Node* kthNode = getKthNode(temp,k);
    if(kthNode==NULL){
        if(prevLast!=NULL){
            prevLast->next=temp;
        }
        break;
    }
    Node* nextGrouphead = kthNode->next;
    kthNode->next=NULL;

    Node* reverseHead = reverseLL(temp);
    if(newHead==NULL){
        newHead = reverseHead;
    }

    if(prevLast!=NULL){
        prevLast->next=reverseHead;
    }
    prevLast=temp;
    temp=nextGrouphead;

   }

   if(newHead==NULL){
    return head;
   }

   return newHead;

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

    Node* kthNode = getKthNode(head,k);
    cout<<"The kth node is "<<kthNode->data<<endl;

    return 0;
}

//LinkedList/Hard/ReverseLinkedListInGroupsofSizekOptimal.cpp