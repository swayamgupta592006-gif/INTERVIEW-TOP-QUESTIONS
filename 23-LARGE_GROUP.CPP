#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;

        int start = 0;

        for (int i = 1; i <= s.size(); i++) {

            if (i == s.size() || s[i] != s[start]) {

                if (i - start >= 3) {
                    ans.push_back({start, i - 1});
                }

                start = i;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    vector<vector<int>> ans = obj.largeGroupPositions(s);

    for (auto &v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }

    return 0;
}
//DEHPOLAAAAAAAAAAAAAAAAAAAAAAAA