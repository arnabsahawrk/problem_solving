#include <bits/stdc++.h>
using namespace std;

double average(int n)
{
    double result = 0;

    for (int i = 0; i < n; i++)
    {
        double numb;
        cin >> numb;

        result += numb;
    }

    result /= n;

    return result;
}

int main()
{
    int n;
    cin >> n;

    cout << fixed << setprecision(7) << average(n);
    return 0;
}