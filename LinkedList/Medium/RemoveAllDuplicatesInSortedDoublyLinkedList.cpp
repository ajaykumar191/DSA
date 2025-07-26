#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int value){
        data = value;
        next=NULL;
        prev=NULL;
    }
};

void insertAtEnd(Node*& head,int value){
    Node* newNode = new Node(value);

    if(!head){
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void printDDL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* removeDuplicates(Node* head){
    if(!head) return head;

    Node* curent = head;

    while(curent!=NULL && curent->next!=NULL){
        if(curent->data == curent->next->data){
            Node* toDelete = curent->next;
            curent->next = toDelete->next;

            if(toDelete->next!=NULL){
                toDelete->next->prev = curent;
            }
            
            delete toDelete;
        }else{
            curent = curent->next;
        }
    }
    return head;
}



int main(){
    Node* head  = NULL;

    vector<int>values = {1,2,2,3,3,3,4,5,5};
    for(int val:values){
        insertAtEnd(head,val);
    }
    printDDL(head);
    head = removeDuplicates(head);
    printDDL(head);
}