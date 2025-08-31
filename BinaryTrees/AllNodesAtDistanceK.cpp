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

unordered_map<Node*, Node*>findParent(Node* root){
    unordered_map<Node*, Node*>parent_track;

    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node->left){
            parent_track[node->left]=node;
            q.push(node->left);
        }
        if(node->right){
            parent_track[node->right]=node;
            q.push(node->right);
        }
    }
    return parent_track;
}

vector<int>findNodesAtLevelK(Node* root, Node* node, int k){
    unordered_map<Node*, Node*>parent_track=findParent(root);
    unordered_map<Node*,bool>visited;

    queue<Node*>q;
    q.push(node);
    visited[node]=true;
    int current_level = 0;
    while(!q.empty()){

        int size = q.size();

        if(current_level==k) break;

        for(int i=0;i<size;i++){

            Node* front = q.front();
            q.pop();
            
            if(front->left && !visited[front->left]){
                q.push(front->left);
                visited[front->left]=true;
            }
            if(front->right && !visited[front->right]){
                q.push(front->right);
                visited[front->right]=true;
            }
            if(parent_track[front] && !visited[parent_track[front]]){
                q.push(parent_track[front]);
                visited[parent_track[front]]=true;
            }
        }
        current_level++;
    }
    vector<int>res;
    while(!q.empty()){
        res.push_back(q.front()->data);
        q.pop();
    }
    return res;
}


int main(){

    Node* three = new Node(3);
    Node* five = new Node(5);
    Node* one = new Node(1);
    Node* four = new Node(4);
    Node* six = new Node(6);
    Node* two = new Node(2);
    Node* seven = new Node(7);
    Node* zero = new Node(0);
    Node* eight = new Node(8);

    three->left = five;
    three->right = one;
    five->left = six;
    five->right = two;
    two->left = seven;
    two->right = four;
    one->left = zero;
    one->right = eight;
    Node* root = three;
    int k = 1;
    vector<int>ans = findNodesAtLevelK(root,five,k);
    for(int node :ans){
        cout<<node<<" ";
    }

}