#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

    int m = mat.size();
    int n = mat[0].size();

 // NOT FUCKING POSSIBLE
    if (m * n != r * c) {
        return mat;
    }

    vector<vector<int>> ans(r, vector<int>(c));

    int x = 0, y = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            ans[x][y] = mat[i][j];

            y++;

            if (y == c) {
                y = 0;
                x++;
            }
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };

    int r = 1;
    int c = 4;

    vector<vector<int>> ans = matrixReshape(mat, r, c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//DEHPOLAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA