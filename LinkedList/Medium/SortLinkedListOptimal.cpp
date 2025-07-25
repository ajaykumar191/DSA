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



Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast ->next->next;
    }
    return slow;
}




Node* merge(Node* list1 ,Node* list2){
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(list1!=NULL && list2!=NULL){

        if(list1->data<list2->data){
            temp->next= list1;
            list1 = list1->next;
        }else{
            temp->next = list2;
            list2 = list2->next;
        }
        temp=temp->next;
    }

    if(list1!=NULL){
        temp->next= list1;
    }
    if(list2!=NULL){
        temp->next = list2;
    }

    return dummy->next;
}

Node* sortLL(Node* head){
    if(head==NULL|| head->next==NULL){
        return head;
    }

    Node* middle = findMiddle(head);
    Node *right = middle->next;
    middle->next=NULL;
    Node *left = head;

    left = sortLL(left);
    right = sortLL(right);

    return merge(left,right);
}

int main(){

    vector<int>arr = {100,243,45,10};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);
    head = sortLL(head);
    printLinkedList(head);

    

    return 0;
}