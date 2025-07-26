#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};

void printDLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* deleteAllOccurrences(Node* head,int key){
    Node* curr = head;

    while(curr!=NULL){
        if(curr->data == key){
            Node* temp = curr;
            curr = curr->next;

            if(temp->prev) temp->prev->next = temp->next;
            else head = temp->next;

            if(temp->next) temp->next->prev = temp->prev;

            delete temp;
            
        }else{
            curr=curr->next;
        }
    }
    return head;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(40);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;

    cout << "Original DLL: ";
    printDLL(head);

    int key = 20;
    head = deleteAllOccurrences(head, key);

    cout << "After deleting " << key << ": ";
    printDLL(head);
}