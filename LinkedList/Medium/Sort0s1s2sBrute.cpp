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

Node* sort0s1s2s(Node *head){
    vector<int>arr;
    if(head==NULL || head->next==nullptr){
        return head;
    }

    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    sort(arr.begin(),arr.end());
    temp= head;

    for(int i=0;i<arr.size();i++){
        temp->data= arr[i];
        temp=temp->next;
    }
    return head;
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

//LinkedList/Medium/Sort0s1s2sOptimal1.cpp