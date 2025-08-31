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

vector<int>postOrderTraversal(Node*root){
    vector<int>ans;
    if(root==NULL) return ans;
    stack<Node*>st1,st2;
    Node* curr = root;
    st1.push(curr);

    while(!st1.empty()){
        Node* curr = st1.top();
        st2.push(curr);
        st1.pop();

        if(curr->left){
            st1.push(curr->left);
        }
        if(curr->right){
            st1.push(curr->right);
        }
    }

    while(!st2.empty()){
        ans.push_back(st2.top()->data);
        st2.pop();
    }
   
    return ans;
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

    vector<int>postorder = postOrderTraversal(root);

    for(int i:postorder){
        cout<<i<<" ";
    }

    return 0;
}