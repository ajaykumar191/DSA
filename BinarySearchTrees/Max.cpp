#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int x):data(x),left(nullptr),right(nullptr){}
};

void inorder(TreeNode*root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

int findMaximum(TreeNode* root){
    TreeNode*curr = root;

    while(curr->right!=nullptr){
        curr=curr->right;
    }
    return curr->data;
}


int main(){

    TreeNode * root = new TreeNode(8);
    root->left = new TreeNode(3);
    root->left->left  = new TreeNode(1);
    root->left->right=new TreeNode(6);
    root->left->right->left = new TreeNode(4);
    root->left->right->right= new TreeNode(7);

    root->right=new TreeNode(10);
    root->right->right = new TreeNode(14);
    root->right->right->left = new TreeNode(13);

    int maxi = findMaximum(root);
    cout<<"The maximum in the tree is "<<maxi<<endl;

    

    return 0;
}