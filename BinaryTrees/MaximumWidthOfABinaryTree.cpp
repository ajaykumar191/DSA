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

int findMaxwidth(Node* root,int& maxWidth){
    queue<pair<Node*,int>>q;

    q.push({root,0});

    while(!q.empty()){

        int n = q.size();
        int first,last;
        for(int i=0;i<n;i++){
            auto p = q.front();
            Node* curr = p.first;
            int line = p.second;
            q.pop();
            if(i==0) first = p.second;
            if(i==n-1)last = p.second;

            if(curr->left){
                q.push({curr->left,(2*line)+1});
            }
            
            if(curr->right){
                q.push({curr->right,(2*line)+2});
            }
        }
        cout<<"First "<<first<<endl;
        cout<<"Last "<<last<<endl;

        maxWidth = max(maxWidth,(last-first)+1);
    }
}


int main(){

    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    Node* seven = new Node(7);
    Node* eight = new Node(8);
    Node* nine = new Node(9);

    one->left=two;
    one->right=three;
    two->left=four;
    two->right=five;
    three->left=six;
    three->right=seven;
    four->left = eight;
    seven->right = nine;

    Node* root = one;
    int maxWidth=0;
    findMaxwidth(root,maxWidth);

    cout<<"The maximum width of the binary tree is "<<maxWidth<<endl;

}