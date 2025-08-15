// | Step | Operation           | Stack (`st[]`) | Increment Array (`inc[]`) | Output |
// | ---- | ------------------- | -------------- | ------------------------- | ------ |
// | 0    | **Start**           | \[]            | \[]                       |        |
// | 1    | push(1)             | \[1]           | \[0]                      |        |
// | 2    | push(2)             | \[1, 2]        | \[0, 0]                   |        |
// | 3    | pop()               | \[1]           | \[0]                      | 2      |
// | 4    | push(2)             | \[1, 2]        | \[0, 0]                   |        |
// | 5    | push(3)             | \[1, 2, 3]     | \[0, 0, 0]                |        |
// | 6    | push(4) \*(ignored) | \[1, 2, 3]     | \[0, 0, 0]                |        |
// | 7    | increment(5,100)    | \[1, 2, 3]     | \[0, 0, 100]              |        |
// | 8    | increment(2,100)    | \[1, 2, 3]     | \[0, 100, 100]            |        |
// | 9    | pop()               | \[1, 2]        | \[0, 200]                 | 103    |
// | 10   | pop()               | \[1]           | \[200]                    | 202    |
// | 11   | pop()               | \[]            | \[]                       | 201    |
// | 12   | pop() *(empty)*     | \[]            | \[]                       | -1     |


#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        vector<int>st;
        vector<int>inc;
        int size;

        Stack(int maxsize){
            size = maxsize;
        }

        void push(int x){
            while(size>st.size()){
                st.push_back(x);
                inc.push_back(0);
            }
        }
        int pop(){
            int i  = st.size()-1;
            if(i<0) return -1;
            if(i>0) inc[i-1]+=inc[i];
            int res = st[i]+inc[i];
            st.pop_back();
            inc.pop_back();
            return res;
        }

        void increment(int k ,int val){
            int i = min(k,(int)st.size()-1);
            if(i>=0) inc[i]+=val;
        }

};

int main(){

    Stack st(3);
    st.push(1);
    st.push(2);
    cout<<st.pop()<<endl;
    st.push(2);
    st.push(3);
    st.increment(3,800);
    st.increment(2,150);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}