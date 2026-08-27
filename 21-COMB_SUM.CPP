#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans;
vector<int> temp;

void solve(vector<int>& a, int t, int i) {
    if (t == 0) {
        ans.push_back(temp);
        return;
    }

    if (i == a.size() || t < 0)
        return;

    temp.push_back(a[i]);
    solve(a, t - a[i], i);
    temp.pop_back();

    solve(a, t, i + 1);
}

int main() {
    vector<int> a = {2, 3, 6, 7};
    int target = 7;

    solve(a, target, 0);

    for (auto v : ans) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
}