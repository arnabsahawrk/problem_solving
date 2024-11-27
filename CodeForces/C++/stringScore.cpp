#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    long long totalScore = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'V')
            totalScore += 5;
        else if (str[i] == 'Z')
        {
            if (i != n - 1)
            {
                if (str[i + 1] == 'V')
                {
                    totalScore /= 5;
                    i++;
                }
                else if (str[i + 1] == 'W')
                {
                    totalScore /= 2;
                    i++;
                }
            }
        }
        else if (str[i] == 'X')
        {
            if (i != n - 1)
                i++;
        }
        else if (str[i] == 'Y')
        {
            if (i != n - 1)
            {
                str.push_back(str[i + 1]);
                n++;
                i++;
            }
        }
        else
            totalScore += 2;
    }

    cout << totalScore << endl;
    return 0;
}