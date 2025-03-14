#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        long long currSum = 0;
        for (int i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
            currSum += arr[i];
        }

        long long sum;
        cin >> sum;

        cout << (sum - currSum) + 1 << endl;
    }

    return 0;
}