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

bool isSymmetric(Node* root1,Node* root2){
    if(root1==nullptr && root2==nullptr) return true;
    if(root1==nullptr || root2==nullptr) return false;
    return ((root1->data == root2->data) && isSymmetric(root1->left,root2->right) && isSymmetric(root1->right , root2->left));
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

    if(isSymmetric(root->left,root->right)){
        cout<<"Symmetric "<<endl;
    }else{
        cout<<"Not Symmetric "<<endl;
    }
    
  
    return 0;
}