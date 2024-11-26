#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char y, k, n;
        cin >> y >> k >> n;
        int Y, K, N;
        cin >> Y >> K >> N;

        bool noIssue = true;
        if (y == 'g' && Y == 1)
        {
            cout << "Imposter detected for ally 1" << endl;
            noIssue = false;
        }
        else if (y == 'h' && Y == 0)
        {
            cout << "Ally 1 has been captured" << endl;
            noIssue = false;
        }

        if (k == 'g' && K == 1)
        {
            cout << "Imposter detected for ally 2" << endl;
            noIssue = false;
        }
        else if (k == 'h' && K == 0)
        {
            cout << "Ally 2 has been captured" << endl;
            noIssue = false;
        }

        if (n == 'g' && N == 1)
        {
            cout << "Imposter detected for ally 3" << endl;
            noIssue = false;
        }
        else if (n == 'h' && N == 0)
        {
            cout << "Ally 3 has been captured" << endl;
            noIssue = false;
        }

        if (noIssue)
            cout << "Everything is fine" << endl;
    }

    return 0;
}