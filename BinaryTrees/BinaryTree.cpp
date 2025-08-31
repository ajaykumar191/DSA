#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
         ~Node() {
        delete left;
        delete right;
    }
};

int main(){

    Node* head = new Node(1);
    Node*two = new Node(2);
    Node* three = new Node(3);
    Node* five = new Node(5);

    head->left=two;
    head->right=three;
    two->right=five;
    return 0;
}