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
bool isSumProperty(Node* root){
    int sum = 0;
    if(root== nullptr  || (root->left == NULL && root->right == NULL)) return true;
    else{

        if(root->left){
            sum+=root->left->data;
        }
        if(root->right){
            sum+=root->right->data;
        }
        return(sum == root->data ) && isSumProperty(root->left) && isSumProperty(root->right);
    }
}
int main(){

    Node* one = new Node(35);
    Node* two = new Node(20);
    Node* three = new Node(15);
    Node* four = new Node(15);
    Node* five = new Node(5);
    Node* six = new Node(10);
    Node* seven = new Node(5);

    one->left=two;
    one->right=three;
    two->left=four;
    two->right=five;
    three->left=six;
    three->right=seven;

    Node* root = one;

    if(isSumProperty(root)){
        cout<<"True!"<<endl;
    }else{
        cout<<"False!"<<endl;
    }

}