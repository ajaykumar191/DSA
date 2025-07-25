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

bool findElement(Node* head,int k){

    while(head!=NULL){
        if(head->data == k){
            return true;
        }
        head=head->next;
    }
    return false;
}

int main(){

    vector<int>arr = {10,23,45,22};
    Node* head = new Node(arr[0]);
    head->next= new Node(arr[1]);
    head->next->next=new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);

    bool ans = findElement(head,45);

    if(ans){
        cout<<"The element is present in the Linked list"<<endl;
    }else{
        cout<<"The element is not present in the Linked list"<<endl;
    }
    return 0;
}