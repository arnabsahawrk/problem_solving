#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);

    for (int i = 0; i < n; i++)
        cin >> dq[i];

    sort(dq.begin(), dq.end());

    dq.push_front(9);

    for (auto x : dq)
        cout << x << " ";

    cout << '\n';

    dq.pop_front();
    dq.push_front(1);
    dq.pop_back();

    for (auto x : dq)
        cout << x << " ";

    return 0;
}