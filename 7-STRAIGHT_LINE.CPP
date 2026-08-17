#include <iostream>
#include <vector>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {

    int x1 = coordinates[0][0];
    int y1 = coordinates[0][1];

    int x2 = coordinates[1][0];
    int y2 = coordinates[1][1];

    int delX = x2 - x1;
    int delY = y2 - y1;

    for (int i = 2; i < coordinates.size(); i++) {

        int x = coordinates[i][0];
        int y = coordinates[i][1];

        if (delY * (x - x1) != delX * (y - y1)) {
            return false;
        }
    }

    return true;
}

int main() {

    vector<vector<int>> coordinates = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5}
    };

    if (checkStraightLine(coordinates)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}