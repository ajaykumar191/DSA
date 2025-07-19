#include<bits/stdc++.h>
using namespace std;
long double minimiseMaxDistance(vector<int>arr,int k){
    int n = arr.size();

    vector<int>gasStations(n-1,0);

    for(int gasStation=1;gasStation<=k;gasStation++){

        int maxIndex = -1;
        long double maxSection =-1;

        for(int i=0;i<n-1;i++){

            int diff = arr[i+1]-arr[i];
            long double sectionLength = diff/(long double)(gasStations[i]+1);

            if(sectionLength>maxSection){
                maxSection = sectionLength;
                maxIndex = i;
            }
        }
        gasStations[maxIndex]++;

    }

    long double maxLength = -1;

    for(int i=0;i<n-1;i++){
        int diff = arr[i+1]-arr[i];
        long double sectionLengt = diff/(long double)(gasStations[i]+1);
        maxLength = max(maxLength,sectionLengt);
    }

    return maxLength;


}
int main(){
    vector<int> arr = {0,3,7,14};
    int k = 5;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
