#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    int q;
    cin >> q;

    auto it = find(arr.begin(), arr.end(), q);

    if (it != arr.end())
        cout << it - arr.begin() << endl;
    else
        cout << -1 << endl;

    return 0;
}