#include<bits/stdc++.h>
using  namespace std;
class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int x):data(x),left(nullptr),right(nullptr){}
};

TreeNode* findFloor(TreeNode* root, int target){
    TreeNode* floor = nullptr;
    TreeNode* curr = root;
    while(curr){
        if(curr->data < target){
        floor = curr;
        curr=curr->right;
        }else{
            curr=curr->left;
        }
    }
    return floor;
    
}

int main(){
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left= new TreeNode(2);
    root->left->right = new TreeNode(6);

    int target = 7;

    TreeNode* floor = findFloor(root,target);
    if(floor)cout<<"The floor is "<<floor->data<<endl;
    else cout<<"Floor doesnot exist"<<endl;

}