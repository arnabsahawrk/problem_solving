#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    char c;
    cin >> a >> c >> b;

    switch (c)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }
    return 0;
}