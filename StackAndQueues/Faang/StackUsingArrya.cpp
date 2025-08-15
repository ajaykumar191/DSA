#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
        int arr[100];
        int capacity;
        int topIndex;
    
        public:
            Stack(int size =100){
                capacity = size;
                topIndex = -1;
            }

            bool isFull(){
                if(topIndex==capacity-1){
                    return true;
                }else{
                    return false;
                }
            }

            bool isEmpty(){
                if(topIndex==-1){
                    return true;
                }else{
                    return false;
                }
            }

            int topElement(){
                if(isEmpty()){
                    return -1;
                }else{
                    return arr[topIndex];
                }
            }

            void insert(int num){
                if(isFull()){
                    cout<<"Cannot insert the stack is full! "<<endl;
                    return;
                }else{
                    arr[++topIndex]=num;
                }
            }
            void pop() {
                if(isEmpty()){
                    cout<<"The stack is empty! "<<endl;
                    return;
                }else{
                    arr[topIndex]=0;
                    topIndex--;
                }
            }
};
int main(){
    Stack st(3);
    st.insert(10);
    st.insert(20);
    st.insert(30);
     if(st.isFull()){
        cout<<"The stack is full "<<endl;            
    }

    st.insert(40);
    st.pop();
    if(st.isEmpty()){
        cout<<"The stack is empty "<<endl;            
    }
    if(st.isFull()){
        cout<<"The stack is full "<<endl;            
    }
    
    return 0;
}