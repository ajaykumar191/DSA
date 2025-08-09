#include<bits/stdc++.h>
using namespace std;

int parent(int i) { return (i - 1) / 2; }
int left(int i) { return 2 * i + 1; }
int right(int i) { return 2 * i + 2; }


void heapifyUp(int i,vector<int>&heap){
    while(i>0 && heap[parent(i)]>heap[i]){
        swap(heap[parent(i)],heap[i]);
        i= parent(i);  
    }
}


void heapInsert(int value , vector<int>&heap){
    heap.push_back(value);
    heapifyUp(heap.size()-1,heap);
}

void display(vector<int>heap){
    for(int i =0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int>heap;
    heapInsert(10,heap);
    display(heap);
    heapInsert(20,heap);
    display(heap);
    heapInsert(5,heap);
    display(heap);
    heapInsert(30,heap);
    display(heap);

    
    return 0;
}

//   MinHeap h;
//     h.insert(10);
//     h.insert(20);
//     h.insert(5);
//     h.insert(30);