#include<bits/stdc++.h>
using namespace std;

int findTotalTime(vector<char>tasks,int k){
    int time = 0;
    priority_queue<int>pq;
    unordered_map<char,int>mp;
    for(char c:tasks){
        mp[c]++;
    }
    for(auto it:mp){
        pq.push(it.second);
    }

    while(!pq.empty()){
        int cycle =k+1;
        vector<int>temp;

        while(cycle && !pq.empty()){

            int top = pq.top();
            pq.pop();

            if(top>0){
                temp.push_back(top-1);
            }

            cycle--;
            time++;
        }

        for(int i:temp){
            pq.push(i);
        }
        if(pq.empty()) break;
        time+=cycle;

    }
    return time;


}

int main(){

    vector<char>task={'A','A','A','B','B','B'};
    int k = 2;
    int time = findTotalTime(task,2);
    cout<<time<<endl;

    return 0;
}