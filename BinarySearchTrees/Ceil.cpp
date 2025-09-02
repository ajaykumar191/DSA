#include<bits/stdc++.h>
using  namespace std;
class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int x):data(x),left(nullptr),right(nullptr){}
};

void printInOrder(TreeNode*root){
    if(root==nullptr) return;
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
    
}

TreeNode*findCeil(TreeNode*root,int target){
    TreeNode* curr = root;
    TreeNode* ceil = nullptr;
    while(curr){
        if(curr->data>target){
            ceil = curr;
            curr=curr->left;
        }else{
            curr=curr->right;
        }
    }
    return ceil;
}

int main(){
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(13);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(2);
    root->left->left->right = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->left->right->right = new TreeNode(9);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(14);
    
    cout << "Binary Search Tree: "<< endl;
    printInOrder(root);
    cout << endl;
    int target = 8;
    TreeNode* ceil = findCeil(root,target);
    if(ceil==nullptr)cout<<"No ceil exists "<<endl;
    else cout<<"The ceil is "<<ceil->data<<endl;
}
    