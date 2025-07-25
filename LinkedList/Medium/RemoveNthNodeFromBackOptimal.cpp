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

Node* DeleteNthNodefromEnd(Node* head,int k){
    if(head==NULL){
        return head;
    }
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;
    
    //Node* fast = head;
    //Node* slow = head;
    for(int i=0;i<=k;i++){
        if(fast==NULL) return head;
        fast = fast->next;
    }
    cout<<"The fast pointer is at "<<fast->data<<endl;
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }

    Node* delNode = slow->next;
    slow->next= slow->next->next;
    delete delNode;
   
    return dummy->next;

}

int main(){

    vector<int>arr = {1,2,3,4,5};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);

    printLinkedList(head);
    head =  DeleteNthNodefromEnd(head,2);
    printLinkedList(head);
    

    return 0;
}


//LinkedList/Medium/RemoveNthNodeFromBackOptimal.cpp