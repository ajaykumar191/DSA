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
};

int heightOfTree(Node* root){
    if(root==NULL) return 0;

    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);

    return 1+max(lh,rh);
}

int main(){

    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    Node* seven = new Node(7);

    one->left=two;
    one->right=three;
    two->left=four;
    two->right=five;
    three->left=six;
    three->right=seven;

    Node* root = one;

    int height = heightOfTree(root);

    cout<<"The height of the tree is "<<height<<endl;
    return 0;
}