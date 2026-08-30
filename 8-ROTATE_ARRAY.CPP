#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& a, int start, int end)
{
    while(start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    k = k % n;

    reverseArray(a, 0, n - 1);
    reverseArray(a, 0, k - 1);
    reverseArray(a, k, n - 1);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
// DEHPOLAAAAAAAAAAA SMARTEST WAYYYYYYYYYYYYYYttttttttttt
