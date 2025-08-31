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

Node* findNode(Node* root, int start){
    if(!root) return nullptr;
    if(root->data == start) return root;
    if(Node* l = findNode(root->left, start)) return l;
    return findNode(root->right, start);
}

 unordered_map<Node*,Node*>findParents(Node* root){
    unordered_map<Node*,Node*>parent_track;
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node* target = q.front();
        q.pop();
        if(target->left){
            parent_track[target->left]=target;
            q.push(target->left);
        }
        if(target->right){
            parent_track[target->right]=target;
            q.push(target->right);
        }
    }
    return parent_track;

 }

int findburnTime(Node* root,int start){
    Node* startNode = findNode(root,start);
    if(startNode==nullptr) return 0;
    unordered_map<Node*,Node*>parent_track = findParents(root);
    int time = 0;
    unordered_map<Node*, bool>visited;
    queue<Node*>q;
    q.push(startNode);
    visited[startNode]=true;
    while(!q.empty()){
        time++;
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* current = q.front();
            q.pop();

            if(current->left && !visited[current->left]){
                q.push(current->left);
                visited[current->left]=true;

            }
            if(current->right && !visited[current->right]){
                q.push(current->right );
                visited[current->right]=true;
            }
            if(parent_track[current] && !visited[parent_track[current]]){
                q.push(parent_track[current]);
                visited[parent_track[current]]=true;
            }
        }
    }

    return time;

}

int main(){

   Node* one = new Node(1);
   one->right = new Node(3);
   one->right->right = new Node(6);
   one->right->left = new Node(10);

   one->left = new Node(5);
   one->left->right = new Node(4);
   one->left->right->left = new Node(9);
   one->left->right->right = new Node(2);

    Node* root = one;
    int start = 3;
    int time = findburnTime(root,start);
    cout<<"The total burn time is "<<time<<endl;

}