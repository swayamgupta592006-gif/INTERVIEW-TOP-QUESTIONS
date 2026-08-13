#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& A) {
    int n = A.size();
    vector<int> ans(n);

    int i = 0;

    for (int x : A) {
        if (x % 2 == 0) {
            ans[i] = x;
            i += 2;
        }
    }

    i = 1;

    for (int x : A) {
        if (x % 2 != 0) {
            ans[i] = x;
            i += 2;
        }
    }

    return ans;
}

int main() {
    vector<int> A = {4, 2, 5, 7};

    vector<int> ans = sortArrayByParityII(A);

    for (int x : ans)
        cout << x << " ";

    return 0;
}///dehpolaaaaaaaaaaaaaaaaaaaaaaa