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

int findMaxPathSum(Node* root,int &maxi){
    if(root==NULL) return 0;
    int ls = max(0,findMaxPathSum(root->left,maxi)) ;
    int rs = max(0,findMaxPathSum(root->right,maxi));
    maxi= max(maxi,ls+rs+root->data);

    return max(ls,rs)+ root->data ;
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
    int maxi = INT_MIN;
    findMaxPathSum(root,maxi);
    cout<<"The max path sum of the tree is "<<maxi<<endl;
    return 0;
}