#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int x):data(x),left(nullptr),right(nullptr){}
};

class Solution{
    public:
        string serialize(Node* root){
            if(!root) return "";

            string s= "";
            queue<Node*>q;
            q.push(root);

            while(!q.empty()){
                Node* currNode = q.front();
                q.pop();

                if(currNode == nullptr){
                    s+="#,";
                }else{
                    s+=to_string(currNode->data)+",";
                    q.push(currNode->left);
                    q.push(currNode->right);
                }
            }
            return s;
        }

        Node* deserialize(string data){
            if(data.empty()) return nullptr;
            stringstream s(data);  

            string str;

            getline(s,str,',');

            Node* root = new Node(stoi(str));

            queue<Node*>q;
            q.push(root);

            while(!q.empty()){

                Node* currNode = q.front();
                q.pop();

                getline(s,str,',');

                if(str!="#"){
                    Node* leftNode = new Node(stoi(str));
                    currNode->left = leftNode;
                    q.push(leftNode);
                }
                 getline(s,str,',');

                if(str!="#"){
                    Node* rightNode = new Node(stoi(str));
                    currNode->right = rightNode;
                    q.push(rightNode);
                }
            }
            return root;
        }

};
