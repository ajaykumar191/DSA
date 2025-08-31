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

bool identaicalTree(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL)return true;

    if(root1==NULL || root2==NULL) return false;

    return ((root1->data == root2->data) && identaicalTree(root1->left,root2->left) && identaicalTree(root1->right,root2->right));
}

int main(){

    Node* one = new Node(1);
    Node* two= new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);

    Node* root1=one;
    one->left=two;
    one->right=three;
    three->left=four;
    three->right=five;

    Node* one1 = new Node(1);
    Node* two1= new Node(2);
    Node* three1 = new Node(3);
    Node* four1 = new Node(4);
    Node* five1= new Node(5);

    Node* root2=one1;
    one1->left=two1;
    one1->right=three1;
    three1->left=four1;
    three1->right=five1;

    if(identaicalTree(root1,root2)){
        cout<<"Both the trees are identical "<<endl;
    }else{
        cout<<"Both the trees are not identical"<<endl;
    }
;
    return 0;
}