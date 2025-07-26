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

Node* addTowLL(Node* head1,Node* head2){

    int carry =0;
    Node* dummy  = new Node(-1);
    Node* temp = dummy;
    while(head1 || head2 || carry){
        int sum = carry;
        if(head1){
            sum+=head1->data;
            head1=head1->next;
        }

        if(head2){
            sum+=head2->data;
            head2=head2->next;
        }

        
        int rem = sum%10;
        carry = sum/10;
        Node* node = new Node(rem);
        temp->next = node;
        temp=temp->next;

    }

    return dummy->next;
}


int main(){

    Node* head1 = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    Node* head2 = new Node(4);
    Node* fourth = new Node(5);
    Node* fifth = new Node(9);

    head1->next = second;
    second->next = third;

    head2->next = fourth;
    fourth->next = fifth;

    printLinkedList(head1);
    printLinkedList(head2);

    Node* node = addTowLL(head1,head2);
    printLinkedList(node);
    

    return 0;
}