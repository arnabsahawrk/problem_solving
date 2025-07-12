#include <bits/stdc++.h>
using namespace std;
int n, cou;
string s;
char cha;
bitset<26> ans, bit;
int main()
{
    cin >> n;
    ans.flip();
    while (n--)
    {
        cin >> cha >> s;
        if (ans.count() == 1)
        {
            if (n != 0 && (cha == '!' || cha == '?'))
                cou++;
        }
        else
        {
            bit.reset();
            for (char i : s)
                bit[i - 'a'] = 1;
            if (cha == '!')
                ans &= bit;
            else
                ans &= ~bit;
        }
    }
    cout << cou << '\n';
}