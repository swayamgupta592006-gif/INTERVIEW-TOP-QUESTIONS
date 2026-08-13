#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 0, 2, 1, 1, 0};
    int n = 6;

    int z = 0, c = 0, t = n - 1;

    while (c <= t) {
        if (a[c] == 0)
            swap(a[c++], a[z++]);

        else if (a[c] == 2)
            swap(a[c], a[t--]);

        else
            c++;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
// DEHPOLAAAAAAAAAAAA
