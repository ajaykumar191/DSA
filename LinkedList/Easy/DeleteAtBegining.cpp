#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data=value;
            next=NULL;
        }

};

Node * deleteAtBegining(Node* head){
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp =head;
    head=head->next;
    delete temp;
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

    head = deleteAtBegining(head);

    printLinkedList(head);

    return 0;
}