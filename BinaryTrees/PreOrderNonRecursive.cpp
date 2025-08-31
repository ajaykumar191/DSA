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

vector<int>preorderTraversal(Node*root){
    vector<int>ans;
    if(root==NULL) return ans;
    stack<Node*>st;
    st.push(root);

    while(!st.empty()){
        Node* curr = st.top();
        st.pop();
        ans.push_back(curr->data);
        if(curr->right){
            st.push(curr->right);
        }
        if(curr->left){
            st.push(curr->left);
        }
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

    vector<int>preorder = preorderTraversal(root);

    for(int i:preorder){
        cout<<i<<" ";
    }

    return 0;
}