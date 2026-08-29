#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int freq[10][10] = {};
        int result = 0;

        for (auto &d : dominoes) {
            int a = min(d[0], d[1]);
            int b = max(d[0], d[1]);

            result += freq[a][b];
            freq[a][b]++;
        }

        return result;
    }
};

int main() {
    Solution s;

    vector<vector<int>> dominoes = {
        {1,2}, {2,1}, {3,4}, {5,6}
    };

    cout << s.numEquivDominoPairs(dominoes);

    return 0;
}