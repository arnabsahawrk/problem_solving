#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int disposable, cloth;
        cin >> disposable >> cloth;

        disposable *= 100;
        cloth *= 10;

        if (cloth <= disposable)
        {
            cout << "Cloth" << endl;
        }
        else
        {
            cout << "Disposable" << endl;
        }
    }
}
