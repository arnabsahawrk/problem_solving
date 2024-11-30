#include <iostream>
using namespace std;

int main()
{
    long long A, B, Q;
    cin >> A >> B >> Q;

    if (Q % 3 == 1)
    {
        cout << A << endl;
    }
    else if (Q % 3 == 2)
    {
        cout << B << endl;
    }
    else
    {
        cout << (A ^ B) << endl;
    }

    return 0;
}
