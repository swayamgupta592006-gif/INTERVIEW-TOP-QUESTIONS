#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cost(n);
    for(int i = 0; i < n; i++)
        cin >> cost[i];

    for(int i = 2; i < n; i++) {
        cost[i] += min(cost[i-1], cost[i-2]);
    }

    cout << min(cost[n-1], cost[n-2]);

    return 0;
}