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

    // while(head!=NULL){
    //     cout<<head->data<<" ";
    //     head=head->next;
    // }
    
    // cout<<endl;
}

Node* findFirstNode(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){
            slow=head;

            while (slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

int findLength(Node* head){
    
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){
            int count =1;
            slow = slow->next;

            while(slow!=fast){
                count++;
                slow=slow->next;
            }
            return count;
        }
    }
    return -1;
}

int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    

    int lenght = findLength(head);
    cout<<"The total lenght of the loop is "<<lenght<<endl;
    

    return 0;
}