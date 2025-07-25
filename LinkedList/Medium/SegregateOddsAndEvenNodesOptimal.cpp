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

Node* segregateEvensAndOdds(Node* head){
    Node* oddStart = NULL;
    Node* evenStart = NULL;
    Node* oddEnd = NULL;
    Node* evenEnd = NULL;

    Node* curr= head;

    while(curr!=NULL){

        if(curr->data%2==0){
            if(evenStart == NULL){
                evenStart = curr;
                evenEnd = curr;
            }else{
                evenEnd->next= curr;
                evenEnd=evenEnd->next;
            }
        }else{
            if(oddStart == NULL){
                oddStart = curr;
                oddEnd = curr;
            }else{
                oddEnd->next = curr;
                oddEnd=oddEnd->next;
            }
        }
        curr=curr->next;
    }

    if(evenStart==NULL){
        return oddStart;
    }
    if(oddStart == NULL){
        return evenStart;
    }

    evenEnd->next=oddStart;
    oddEnd->next=NULL;
    return evenStart;
}


int main(){

    vector<int>arr = {10,23,45,100};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    printLinkedList(head);
    head = segregateEvensAndOdds(head);
    printLinkedList(head);
   
    

    return 0;
}

//LinkedList/Medium/SegregateOddsAndEvenNodesOptimal.cpp