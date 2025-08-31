#include<bits/stdc++.h>
using namespace std;

class Reserve{
    public:
        priority_queue<int ,vector<int>,greater<int>>pq;
        int reserve(){
            int seat =pq.top();
            pq.pop();
            return seat;
        }
        void unreserve(int seat){
            pq.push(seat);
        }
};
int main(){

    int n = 4;
    Reserve r;

    for(int i=1;i<=n;i++){
        r.pq.push(i);
    }
    cout<<r.reserve()<<endl;
    cout<<r.reserve()<<endl;
    cout<<r.reserve()<<endl;
    r.unreserve(1);
    r.unreserve(2);
    cout<<r.reserve()<<endl;
    cout<<r.reserve()<<endl;
    cout<<r.reserve()<<endl;

    return 0;
}