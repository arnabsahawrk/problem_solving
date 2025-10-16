#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int main()
{
    fast_io;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int N, K;
        cin >> N >> K;
        int A[N];
        int B[N];

        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        int moveReq = 0, minDiff = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            int cnt = min(abs(A[i] - B[i]), 9 - abs(A[i] - B[i]));
            int cnt2 = max(abs(A[i] - B[i]), 9 - abs(A[i] - B[i]));

            moveReq += cnt;
            minDiff = min(minDiff, cnt2 - cnt);
        }

        int remain = K - moveReq;

        if (remain >= 0 && (remain % 2 == 0 || minDiff <= remain))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}