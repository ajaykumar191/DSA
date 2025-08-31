#include <bits/stdc++.h>
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
void preOrder(Node *root, vector<int> &result)
{
    if (root == NULL)
        return;
    result.push_back(root->data);
    preOrder(root->left, result);
    preOrder(root->right, result);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Getting preorder traversal
    vector<int> result;
    preOrder(root, result);

    // Displaying the preorder traversal result
    cout << "Preorder Traversal: ";
    // Output each value in the
    // preorder traversal result
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}