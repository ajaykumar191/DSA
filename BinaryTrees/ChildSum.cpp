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

void childrenSumProperty(Node*& root){
    if(root==nullptr) return;

    int childsum = 0;
    if(root->left){
        childsum+=root->left->data;
    }
    if(root->right){
        childsum+=root->right->data;
    }
    if(childsum>=root->data){
        root->data = childsum;
    }else{
        if(root->left){
            root->left->data = root->data;
        }
        if(root->right){
            root->right->data = root->data;
        }
    }

    childrenSumProperty(root->left);
    childrenSumProperty(root->right);

    int total = 0;
    if(root->left){
        total+= root->left->data;
    }
    if(root->right){
        total+=root->right->data;
    }
    if(root->left || root->right){
        root->data = total;
    }
    
}

void inorder(Node* root){
    if(root==nullptr){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){

    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    inorder(root);
    cout<<endl;
    childrenSumProperty(root);

    inorder(root);

}