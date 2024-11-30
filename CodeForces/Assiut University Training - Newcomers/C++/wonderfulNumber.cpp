#include <bits/stdc++.h>
using namespace std;

bool isBinaryPalindrome(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary += (n % 2) + '0';
        n /= 2;
    }
    string reversedBinary = binary;
    reverse(reversedBinary.begin(), reversedBinary.end());
    return binary == reversedBinary;
}

bool isWonderful(int n)
{
    return (n & 1) && isBinaryPalindrome(n);
}

int main()
{
    int n;
    cin >> n;

    if (isWonderful(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
