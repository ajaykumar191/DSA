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
    if(lh==-1) return -1;
    int rh = heightOfTree(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;

    return 1+max(lh,rh);
}

bool isBalanced(Node* root){
    if(heightOfTree(root)!=-1)return true;
    return false;
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

    
    if(isBalanced(root)){
        cout<<"The given tree is balanced "<<endl;
    }else{
        cout<<"The given tree is not balanced "<<endl;
    }

    return 0;
}