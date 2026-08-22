#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int rem = 0;

    for(int i = 0; i < n; i++) {
        rem = (rem * 2 + nums[i]) % 5;

        if(rem == 0)
            cout << "true ";
        else
            cout << "false ";
    }

    return 0;
}