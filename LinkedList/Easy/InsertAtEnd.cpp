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

Node* insertAtEnd(Node* head,int value){
    Node* node = new Node(value);
    if(head==NULL){
        head=node;
    }else{
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node;
    }
    return head;
}
void printLinkedList(Node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    vector<int>arr = {10,23,45,22};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);

    insertAtEnd(head,123);

    printLinkedList(head);

}