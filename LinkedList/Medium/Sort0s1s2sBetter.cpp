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
    Node* fast = head->next;
    Node* slow = head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

Node* merge(Node* list1 , Node* list2){
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(list1!=NULL && list2!=NULL){

        if(list1->data<list2->data){
            temp->next=list1;
           
            list1=list1->next;
        }else{
            temp->next=list2;
            list2=list2->next;
        }
         temp=temp->next;

    }

    if(list1!=NULL){
        temp->next=list1;
    }
    if(list2!=NULL){
        temp->next=list2;
    }

    return dummy->next;
}

Node* sort0s1s2s(Node *head){
    if(!head || !head->next){
        return head;
    }

    Node* midNode = findMiddle(head);
    Node* left = head;
    Node* right = midNode->next;
    midNode->next=NULL;


    left = sort0s1s2s(left);
    right = sort0s1s2s(right);

    return merge(left,right);
}



int main(){

    vector<int>arr = {1,2,0,1};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);
    head =  sort0s1s2s(head);
    printLinkedList(head);
    

    return 0;
}

//LinkedList/Medium/Sort0s1s2sOptimal.cpp