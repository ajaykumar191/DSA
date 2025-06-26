#include <bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<char>q;

    q.push('a');
    q.push('m');
    q.push('b');

    while(!q.empty()){
        cout << q.top()<<endl;
        q.pop();
    }

    return  0;
}