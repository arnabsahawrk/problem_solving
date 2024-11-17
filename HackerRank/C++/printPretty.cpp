#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        cout << hex << showbase << nouppercase << left << long(A) << endl;
        cout << fixed << setw(15) << setprecision(2) << showpos << right << setfill('_') << B << endl;
        cout << fixed << setprecision(9) << scientific << uppercase << left << noshowpos << C << endl;
    }
    return 0;
}