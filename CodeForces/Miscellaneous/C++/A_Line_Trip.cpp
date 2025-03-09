#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr;
        arr.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            arr.push_back(d);
        }
        arr.push_back(x);
        n = arr.size();

        int maxC = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                maxC = max(maxC, 2 * (arr[i] - arr[i - 1]));
            else
                maxC = max(maxC, arr[i] - arr[i - 1]);
        }

        cout << maxC << endl;
    }

    return 0;
}