#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data=value;
            next=NULL;
        }
};

int lenghtOfLinkedList(Node* head){
    int count =0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
int main(){

    vector<int>arr = {10,23,45,22};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    cout<<"The length of linked list is "<<lenghtOfLinkedList(head)<<endl;
    return 0;
}