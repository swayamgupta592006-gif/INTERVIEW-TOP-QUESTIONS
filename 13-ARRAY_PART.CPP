#include <bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int ans = 0;

    for (int i = 0; i < nums.size(); i += 2) {
        ans += nums[i];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << arrayPairSum(nums);

    return 0;
}