#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data ;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }
};

bool detectCycle(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL && fast->next!=NULL){
        fast= fast->next->next;
        slow=slow->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
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

    if(detectCycle(head)){
        cout<<"Cycle exists!"<<endl;
    }else{
        cout<<"No cycle detected!"<<endl;
    }
    return 0;
}