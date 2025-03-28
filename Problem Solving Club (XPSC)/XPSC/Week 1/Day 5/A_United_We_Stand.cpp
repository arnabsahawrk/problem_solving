#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int maxi = *max_element(arr, arr + n);

        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != maxi)
                a.push_back(arr[i]);
            else
                b.push_back(arr[i]);
        }

        if (a.size() == 0)
            cout << -1 << endl;
        else
        {
            cout << a.size() << " " << b.size() << endl;

            for (int it : a)
                cout << it << " ";
            cout << endl;
            for (int it : b)
                cout << it << " ";

            cout << endl;
        }
    }

    return 0;
}