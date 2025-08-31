#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node*left;
        Node* right;

        Node(int val){
            data=val;
            left=nullptr;
            right=nullptr;
        }
};

void findVertical(Node* root){
    map<int,map<int,multiset<int>>>nodes;
    queue<pair<Node*,pair<int,int>>>todos;
    todos.push({root,{0,0}});
    while(!todos.empty()){
        auto it = todos.front();
        todos.pop();

        Node* curr = it.first;
        int x = it.second.first;
        int y = it.second.second;

        nodes[x][y].insert(curr->data);

        if(curr->left){
            todos.push({curr->left,{x-1,y+1}});
        }
        if(curr->right){
            todos.push({curr->right,{x+1,y+1}});
        }
    }
    vector<vector<int>>ans;
    for(auto it:nodes){
        vector<int> col;
        for (auto i: it.second){
            col.insert(col.end(), i.second.begin(), i.second.end());
        }  
        ans.push_back(col); 
    }

    for(auto row: ans){
        for(auto num:row){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

int  main(){
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


    findVertical(root);

    return 0;
}