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

Node* buildTree(vector<int>&inOrder,int inStart,int inEnd, vector<int>&postOrder,int postStart,int postEnd,unordered_map<int,int>&inMap){

    if(inStart>inEnd || postStart>postEnd) return NULL;

    Node* root = new Node(postOrder[postEnd]);
    int inIndex = inMap[postOrder[postEnd]];
    int numsLeft = inIndex - inStart;

    root->left = buildTree(inOrder,inStart,inIndex-1,postOrder,postStart,postStart+numsLeft-1,inMap);
    root->right = buildTree(inOrder,inIndex+1,inEnd,postOrder,postStart+numsLeft,postEnd-1,inMap);

    return root;
}


int main(){
    vector<int> inorder = {40, 20, 50, 10, 60, 30};
    vector<int> postorder = {40, 50, 20, 60, 30, 10};
    unordered_map<int,int>inMap;
    for(int i=0;i<inorder.size();i++){
        inMap[inorder[i]]=i;
    }
    Node* root = buildTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,inMap);
}