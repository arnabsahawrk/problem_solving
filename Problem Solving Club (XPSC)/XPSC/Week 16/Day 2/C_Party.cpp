#include <cstdio>
int n, m, l, u, v, s[1 << 22 | 1], h, t, q[1 << 22 | 1], i, j, k;
int main()
{
    scanf("%d%d", &n, &m), l = (1 << n) - 1;
    if (m == n * (n - 1) >> 1)
        return puts("0"), 0;
    while (m--)
        scanf("%d%d", &u, &v), s[1 << u - 1] |= 1 << v - 1, s[1 << v - 1] |= 1 << u - 1;
    for (i = 0; i < n; i++)
    {
        if ((s[1 << i] |= 1 << i) == l)
            return printf("1\n%d", i + 1), 0;
        q[++t] = 1 << i;
    }
    while (1)
    {
        i = q[h++], j = s[i] ^ i;
        while (j)
        {
            k = j & -j;
            if ((s[i] | s[k]) == l)
            {
                printf("%d\n", __builtin_popcount(i |= k));
                for (j = 0; j < n; j++)
                    if (i & 1 << j)
                        printf("%d ", j + 1);
                return 0;
            }
            if (!s[i | k])
                s[q[++t] = i | k] = s[i] | s[k];
            j ^= k;
        }
    }
}
