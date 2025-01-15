#include <bits/stdc++.h>
using namespace std;
vector<int> prevSmall(vector<int> arr, int n)
{
    vector<int> result(n, -1);
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }

        if (!s.empty())
        {
            result[i] = arr[s.top()];
        }

        s.push(i);
    }

    return result;
}
