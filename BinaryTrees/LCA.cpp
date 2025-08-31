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


Node* LCA(Node* root ,Node* p ,Node* q){
   if(!root || root==p || root == q) return root;

   Node* left = LCA(root->left,p,q);
   Node* right = LCA(root->right,p,q);
   if(left && right) return root;
   
   return left?left:right;
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
    
    Node* lowestCommonAncestor = LCA(root,six,seven);

    if(lowestCommonAncestor!=nullptr){
        cout<<"The lowest common ancestor is "<<lowestCommonAncestor->data<<endl;
    }else{
        cout<<"The lowest common ancestor is not found!"<<endl;
    }
   
    return 0;
}