#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int width, height;
        cin >> width >> height;

        if (width == height)
            cout << "Square" << endl;
        else
            cout << "Rectangle" << endl;
    }

    return 0;
}