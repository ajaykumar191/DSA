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

bool getPath(Node* root , vector<int>&res, int target){
    if(root == nullptr) return false;

    res.push_back(root->data);
    if(root->data == target) return true;

    if(getPath(root->left,res,target)==true) return true;
    if(getPath(root->right,res,target)==true) return true;
    res.pop_back();

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
    vector<int>ans;

    getPath(root,ans,5);

    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}