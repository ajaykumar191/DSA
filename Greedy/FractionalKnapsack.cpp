#include<bits/stdc++.h>
using namespace std;

struct Item
{
   int value,weight;
};

bool cmp(Item a ,Item b){
    double r1 =(double) a.value/a.weight;
    double r2 = (double) b.value/b.weight;

    return r1>r2;
}

double fractionalKnapsack(int W,  vector<Item>&items){

    sort(items.begin(),items.end(),cmp);
    int n = items.size();

    double totalValue = 0;
    for(int i =0;i<n;i++){
        if(items[i].weight<=W){
            W-=items[i].weight;
            totalValue+=items[i].value;
        }else{
            totalValue += items[i].value * ((double)W / items[i].weight);
            break;
        }
    }
    return totalValue;
}

int main(){
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};
    int W = 50;
    cout << fractionalKnapsack(W, items) << endl; 
}