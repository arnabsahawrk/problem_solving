#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if (mp.size() >= 3)
            cout << "No" << endl;
        else
        {
            int freq1 = mp.begin()->second;
            int freq2 = mp.rbegin()->second;

            if (freq1 == freq2)
                cout << "Yes" << endl;
            else if (n % 2 == 1 && abs(freq1 - freq2) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}