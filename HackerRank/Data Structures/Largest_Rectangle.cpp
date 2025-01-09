#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    h[n] = 0;
    stack<int> s;
    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (s.empty() || h[i] > h[s.top()])
        {
            s.push(i);
        }
        else
        {
            int index = s.top();
            s.pop();
            ans = max(ans, (long long)h[index] * (i - (s.empty() ? -1 : s.top()) - 1));
            i--;
        }
    }
    cout << ans;
}