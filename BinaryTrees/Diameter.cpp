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

int findDiameter(Node* root,int &diameter){
    if(root==NULL) return 0;
    int lh = findDiameter(root->left,diameter);
    int rh = findDiameter(root->right,diameter);
    diameter= max(diameter,lh+rh);
    return 1+max(lh,rh);
}




int main(){

    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
   // Node* six = new Node(6);
    //Node* seven = new Node(7);

    one->left=two;
    one->right=three;
    two->left=four;
    two->right=five;
    //three->left=six;
   // three->right=seven;

    Node* root = one;
    int diameter = 0;
    findDiameter(root,diameter);
    cout<<"The max diameter of the tree is "<<diameter+1<<endl;
    return 0;
}