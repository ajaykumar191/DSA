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

vector<int>findTopView(Node* root){
    vector<int>topView;
    if(root==nullptr) return topView;

    map<int,int>mp;
    queue<pair<Node*,int>>q;

    q.push({root,0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        Node* node = it.first;
        int line = it.second;

        if(mp.find(line) == mp.end()){
            mp[line]=node->data;
        }
        if(node->left){
            q.push({node->left,line-1});
        }
        if(node->right){
            q.push({node->right,line+1});
        }
    }

    for(auto it:mp){
        topView.push_back(it.second);
    }
    return topView;

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

    
    vector<int>topView = findTopView(root);
    for(int i: topView){
        cout<<i<<" ";
    }

    return 0;
}