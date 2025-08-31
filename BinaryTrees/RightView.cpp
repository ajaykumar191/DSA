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
vector<int>findrightView(Node* root){
    vector<int>rightView;
    if(root==nullptr) return rightView;
    queue<Node*>q;

    q.push(root);

    while(!q.empty()){
        int size = q.size();

        for(int i=0;i<size;i++){

            Node* curr = q.front();
            q.pop();
            if(i==size-1) rightView.push_back(curr->data);
            if(curr->left) q.push(curr->left);
            if(curr->right)q.push(curr->right);
            
        }
    }
    return rightView;
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

    
    vector<int>rightView = findrightView(root);
    for(int i: rightView){
        cout<<i<<" ";
    }

    return 0;
}