#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int key, value;
    Node *next, *prev;

    Node(int k, int v) {
        key = k;
        value = v;
        next = prev = nullptr;
    }
};

void deleteNode(Node* node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
}

void insertAfterHead(Node* node, Node* head) {
    Node* nextNode = head->next;
    head->next = node;
    node->prev = head;
    node->next = nextNode;
    nextNode->prev = node;
}

void insert(unordered_map<int, Node*>& mp, Node*& head, Node*& tail, int key, int value, int capacity) {
    if (mp.find(key) != mp.end()) {
        // Key exists: update and move to front
        Node* existing = mp[key];
        existing->value = value;
        deleteNode(existing);
        insertAfterHead(existing, head);
        mp[key] = existing;
        return;
    }

    if (mp.size() == capacity) {
        // Remove least recently used node
        Node* lru = tail->prev;
        int lruKey = lru->key;
        deleteNode(lru);
        mp.erase(lruKey);
        delete lru;
    }

    Node* newNode = new Node(key, value);
    insertAfterHead(newNode, head);
    mp[key] = newNode;
}

int get(unordered_map<int, Node*>& mp, Node*& head, Node*& tail, int key) {
    if (mp.find(key) == mp.end()) {
        return -1;
    }

    Node* node = mp[key];
    deleteNode(node);
    insertAfterHead(node, head);
    mp[key] = node;
    return node->value;
}

int main() {
    int capacity = 3;
    unordered_map<int, Node*> mp;
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    head->next = tail;
    tail->prev = head;

    insert(mp, head, tail, 1, 10, capacity);
    insert(mp, head, tail, 2, 20, capacity);
    insert(mp, head, tail, 3, 30, capacity);

    cout << get(mp, head, tail, 2) << endl; // 20
    insert(mp, head, tail, 4, 40, capacity); // evicts 1
    cout << get(mp, head, tail, 1) << endl; // -1
    cout << get(mp, head, tail, 3) << endl; // 30
    insert(mp, head, tail, 5, 50, capacity); // evicts 4
    cout << get(mp, head, tail, 4) << endl; // -1
    cout << get(mp, head, tail, 5) << endl; // 50

    // Clean up memory
    Node* curr = head;
    while (curr) {
        Node* next = curr->next;
        delete curr;
        curr = next;
    }

    return 0;
}
