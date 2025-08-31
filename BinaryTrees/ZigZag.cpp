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

vector<vector<int>>zigZagTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    vector<vector<int>>ans;
    bool leftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int>temp(size);
       
        for(int i=0;i<size;i++){
            Node* curr = q.front();
            q.pop();
           int pos = leftToRight ? i : (size - 1 - i);
            temp[pos] = curr->data;
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        leftToRight=!leftToRight;
        ans.push_back(temp);
    }
    return ans;
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

    vector<vector<int>>ans = zigZagTraversal(root);

    for(auto it: ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}