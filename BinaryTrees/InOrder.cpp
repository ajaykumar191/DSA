#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node* root,vector<int>&result){
    if(root==NULL) return;
    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);
}
int main(){

   Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result;
    inOrder(root, result);

    cout << "Inorder Traversal: ";
 
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}