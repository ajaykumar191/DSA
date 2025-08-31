#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data=val;
            left=nullptr;
            right=nullptr;
        }
};

bool isLeaf(Node* root){
    
    if(root->left==NULL && root->right==NULL) return true;
    return false;
}

void leftTraversal(Node* root,vector<int>&res){
    Node* curr = root;

    while(curr!=NULL){

        if(!isLeaf(curr)){
            res.push_back(curr->data);
        }
        if(curr->left){
            curr=curr->left;
        }else{
            curr=curr->right;

        }
    }
}

void rightTraversal(Node* root,vector<int>&res){
    Node* curr= root->right;
    vector<int>temp;
    while(curr){

        if(!isLeaf(curr)){
            temp.push_back(curr->data);
        }
        if(curr->right){
            curr=curr->right;
        }else{
            curr=curr->left;
        }
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}

void leafTraversal(Node* root ,vector<int>&res){
    if(root==NULL) return;

    if(isLeaf(root)){
        res.push_back(root->data);
    }
    leafTraversal(root->left,res);
    leafTraversal(root->right,res);
}

int main(){
    Node* one = new Node(1);
    Node* two= new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    Node* seven = new Node(7);

    Node* root=one;
    one->left=two;
    one->right=three;
    two->left=four;
    two->right=five;
    three->left=six;
    three->right=seven;

    vector<int>res;

    leftTraversal(root,res);
    leafTraversal(root,res);
    rightTraversal(root,res);

    for(int i:res){
        cout<<i<<" ";
    }


}