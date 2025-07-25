#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node*next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

void printHead(Node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* addAtTheBeggining(Node* head,int value){
    Node* newNode = new Node(value);
    if(head==NULL){
        head=newNode;
        
    }else{
        newNode->next=head;
        head=newNode;
    }
    return head;
}
int main(){

    vector<int> arr = {12, 8, 5, 7};
    int val = 100;

    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next=new Node(arr[3]);

    printHead(head);

    head = addAtTheBeggining(head,val);

    printHead(head);


    return 0;
}