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
   Node* zeroHead = NULL;
   Node* oneHead = NULL;
   Node* twoHead = NULL;
   Node* zeroTail = NULL;
   Node* oneTail = NULL;
   Node* twoTail = NULL;

   Node* temp = head;
   while(temp!=NULL){

    if(temp->data ==0){
        if(zeroHead==NULL){
            zeroHead=temp;
            zeroTail=temp;

        }else{
            zeroTail->next=temp;
            zeroTail=zeroTail->next;
        }
    }else if(temp->data==1){
        if(oneHead==NULL){
            oneHead = temp;
            oneTail = temp;
        }else{
            oneTail->next = temp;
            oneTail=oneTail->next;
        }
    }else{
        if(twoHead==NULL){
            twoHead=temp;
            twoTail=temp;
        }else{
            twoTail->next=temp;
            twoTail=twoTail->next;
        }
    }
    temp=temp->next;
   }
   zeroTail->next=oneHead;
   oneTail->next=twoHead;
   twoTail->next=NULL;

   return zeroHead;
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