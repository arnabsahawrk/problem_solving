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
        int n, k;
        cin >> n >> k;

        int A[n], B[n];

        for (int i = 0; i < n; i++)
            cin >> A[i];

        int sum = 0;

        for (int i = 0; i < n; i++)
        {

            cin >> B[i];

            sum += abs(A[i] - B[i]);
        }

        cout << sum << endl;
    }

    return 0;
}