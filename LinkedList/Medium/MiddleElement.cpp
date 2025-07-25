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


int findMiddle(Node* head){
    if(head==NULL){
        return -1;
    }
    else if(head->next==NULL){
        return head->data;
    }
    else{
        Node* fast = head;
        Node* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
    }
    return -1;
}
int main(){

    vector<int>arr = {10,23,45,100};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);

    int middleElemnt = findMiddle(head);
    cout<<"The middle element is "<<middleElemnt<<endl;

    return 0;
}