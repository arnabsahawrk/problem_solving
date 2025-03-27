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

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            string str;
            cin >> str;

            for (int j = 0; j < x; j++)
            {
                if (str[j] == 'U')
                {
                    if (arr[i] == 0)
                        arr[i] = 9;
                    else
                        arr[i]--;
                }
                else
                {
                    if (arr[i] == 9)
                        arr[i] = 0;
                    else
                        arr[i]++;
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    return 0;
}