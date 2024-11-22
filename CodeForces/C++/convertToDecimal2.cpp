#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;
        do
        {
            if (n % 2 == 1)
                count++;
        } while (n /= 2);

        int result = 0;
        for (int i = 0; i < count; i++)
        {
            result += pow(2, i);
        }

        cout << result << endl;
    }

    return 0;
}