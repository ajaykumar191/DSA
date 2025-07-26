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

Node* findIntersection(Node* head1,Node* head2){
    if(head1==NULL || head2==NULL){
        return NULL;
    }
    Node* a = head1;
    Node* b = head2;
    while(a!=b){
           
        a = (a==NULL)?head2:a->next;
        b = (b==NULL)?head1:b->next;
    }
    return a;
}

int main(){

    //vector<int>arr = {1,3,1,2,4};
   Node* head1 = new Node(1);
   Node* second =  new Node(3);
   Node* third = new Node(1);
   Node* fourth = new Node(2);
   Node* fifth = new Node(4);
   Node* head2 = new Node(3);

   head1->next = second;
   second->next = third;
   third->next = fourth;
   fourth->next = fifth;
   head2->next = fourth;



    printLinkedList(head1);
    printLinkedList(head2);

    Node* node = findIntersection(head1,head2);

    if(!node){
        cout<<"No intersection found!"<<endl;
    }else{
        cout<<"Intersection found at "<<node->data<<endl;
    }
    

    return 0;
}