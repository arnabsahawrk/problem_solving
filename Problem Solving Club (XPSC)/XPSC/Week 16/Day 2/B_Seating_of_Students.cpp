#include <bits/stdc++.h>
using namespace std;
int ans[100005], n, m;
bool near(int a, int b)
{
    return abs(a - b) == 1 || abs(a - b) == m;
}
void dfs(int now)
{
    if (now == n * m)
    {
        printf("YES\n");
        for (int i = 0; i < n; i++, printf("\n"))
            for (int j = 0; j < m; j++)
                printf("%d ", ans[i * m + j] + 1);
        exit(0);
    }
    int x = now / m, y = now % m;
    for (int i = now; i < n * m; i++)
    {
        swap(ans[i], ans[now]);
        if (x && near(ans[now], ans[(x - 1) * m + y]) || y && near(ans[now], ans[x * m + y - 1]))
            continue;
        dfs(now + 1);
        swap(ans[i], ans[now]);
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n * m; i++)
        ans[i] = i;
    dfs(0);
    printf("NO\n");
}