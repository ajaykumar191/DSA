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

Node* reverseLinkedList(Node* head){
    Node* curr = head;
    Node* prev = NULL;

    while(curr!=NULL){
        Node* nextNode = curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

bool checkPalindrome(Node* head){
   if(!head || !head->next){
    return true;
   }

   Node* slow = head;
   Node* fast = head;
   while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
   }
   if (fast != NULL) {
    slow = slow->next;
}

   Node* secondHalf = reverseLinkedList(slow);
   Node* firstHalf = head;

   while(secondHalf!=NULL){

    if(secondHalf->data!=firstHalf->data){
        return false;
    }
    secondHalf=secondHalf->next;
    firstHalf=firstHalf->next;
   }
   return true;
}


int main(){

    vector<int>arr = {1,2,3,1};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);

    if(checkPalindrome(head)){
        cout<<"The given linked list is palindrome "<<endl;
    }else{
        cout<<"The given linked list is not palindrome"<<endl;
    }

    

    return 0;
}