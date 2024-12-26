#include <bits/stdc++.h>
using namespace std;

int main()
{
    int returnDate, returnMonth, returnYear;
    int dueDate, dueMonth, dueYear;

    cin >> returnDate >> returnMonth >> returnYear >> dueDate >> dueMonth >> dueYear;

    if (returnYear < dueYear)
    {
        cout << 0 << endl;
    }
    else if (returnYear == dueYear)
    {
        if (returnMonth < dueMonth)
        {
            cout << 0 << endl;
        }
        else if (returnMonth == dueMonth)
        {
            if (returnDate <= dueDate)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << (returnDate - dueDate) * 15 << endl;
            }
        }
        else
        {
            cout << (returnMonth - dueMonth) * 500 << endl;
        }
    }
    else
    {
        cout << 10000 << endl;
    }
    return 0;
}