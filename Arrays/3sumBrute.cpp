#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();

    set<vector<int>> triplets;  

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                //cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" = "<<arr[i]+arr[j]+arr[k]<<endl;
                if (arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    triplets.insert(temp);  
                }
            }
        }
    }

    for (const auto& triplet : triplets) {
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
