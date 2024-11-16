#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    long long int b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;

    cout << a << endl
         << b << endl
         << c << endl;

    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;

    return 0;
}