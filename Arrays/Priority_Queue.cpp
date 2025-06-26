#include <bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int>odd;
    priority_queue<int ,vector<int>,greater<int>> even;

    odd.push(10);
    odd.push(0);
    odd.push(20);
    odd.push(30);

    while (!odd.empty()){
        cout << odd.top()<<endl;
        odd.pop();
    }
    

    return 0;
}