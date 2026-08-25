#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        int x = abs(nums[i]) - 1;
        nums[x] = -abs(nums[x]);
    }

    vector<int> ans;

    for(int i = 0; i < n; i++) {
        if(nums[i] > 0)
            ans.push_back(i + 1);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> ans = findDisappearedNumbers(nums);

    for(int x : ans)
        cout << x << " ";

    return 0;
}