#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int cnt[10][10] = {};
        int ans = 0;

        for (auto &d : dominoes) {
            int a = min(d[0], d[1]);
            int b = max(d[0], d[1]);

            ans += cnt[a][b];
            cnt[a][b]++;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> dominoes = {
        {1,2},
        {2,1},
        {3,4},
        {5,6},
        {4,3}
    };

    cout << obj.numEquivDominoPairs(dominoes) << endl;

    return 0;
}