#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int x){
            data = x;
            left = nullptr;
            right = nullptr;
        }
};
Node* buildTree(vector<int>preOrder,int preStart,int preEnd,vector<int>&inOrder,int inStart,int inEnd,unordered_map<int,int>inMap){
    if(preStart>preEnd || inStart>inEnd){
        return NULL;
    }
    Node* root = new Node(preOrder[preStart]);

    int inIndex = inMap[preOrder[preStart]];
    int numsLeft = inIndex-inStart;

    root->left = buildTree(preOrder,preStart+1, preStart+numsLeft,inOrder,inStart,inIndex-1,inMap);
    root->right = buildTree(preOrder,preStart+numsLeft+1,preEnd,inOrder,inIndex+1,inEnd,inMap);

    return root;
}

int main(){

    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> preorder = {3, 9, 20, 15, 7};

    unordered_map<int,int>inMap;
    for(int i=0;i<inorder.size();i++){
        inMap[inorder[i]]=i;
    }

    Node* root = buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMap);



    return 0;
}