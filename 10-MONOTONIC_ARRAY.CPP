#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& nums) {

    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {

        if (nums[i] < nums[i - 1])
            increasing = false;

        if (nums[i] > nums[i - 1])
            decreasing = false;
    }

    return increasing || decreasing;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    if (isMonotonic(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}