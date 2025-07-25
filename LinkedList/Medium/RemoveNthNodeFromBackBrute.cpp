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
    int length = 0;
    Node* curr = head;
    while(curr!=NULL){
        length++;
        curr=curr->next;
    }

    if(length==k){
        Node *delNode = head;
        head=head->next;
        delete delNode;

        return head;
    }

    int start = length-k;
    curr = head;
    while(curr!=NULL){
        start--;
        if(start==0){
            break;
        }
        curr=curr->next;
    }

    Node* delNode = curr->next;
    curr->next=curr->next->next;

    return head;

}

int main(){

    vector<int>arr = {10,23,45,100};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);
    head =  DeleteNthNodefromEnd(head,2);
    printLinkedList(head);
    

    return 0;
}


//LinkedList/Medium/RemoveNthNodeFromBackOptimal.cpp