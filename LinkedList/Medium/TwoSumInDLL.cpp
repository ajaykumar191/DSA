#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next=NULL;
        prev=NULL;
    }



};
void insertAtEnd(Node*& head,int val){
    if(head==NULL){
        head = new Node(val);
        return;
    }else{
        Node* curr = head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        Node* node = new Node(val);
        curr->next = node;
        node->prev=curr;
    }
}
void pairSum(Node* head,int target){

    Node* left = head;
    Node* right = head;
    while(right->next!=NULL){
        right = right->next;
    }

    while(left!=right && left->prev!=right){
        int sum = left->data + right->data;
        if(sum==target){
            cout<<"The pair is "<<left->data<<","<<right->data<<endl;
            left=left->next;
            right=right->prev;
        }else if(sum>target){
            right = right->prev;
        }else{
            left = left->next;
        }
    }

}
int main(){

    vector<int>arr={1,2,3,4,5,6,8,9};
    Node* head = NULL;
    for(int val:arr){
        insertAtEnd(head,val);
    }

    pairSum(head,7);
} 