#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> array;

    while (n--)
    {
        int x;
        cin >> x;
        array.push_back(x);
    }

    int a, b, c;
    cin >> a >> b >> c;

    array.erase(array.begin() + a - 1);
    array.erase(array.begin() + b - 1, array.begin() + c - 1);
    int i = 0;
    n = array.size();
    cout << n << endl;
    while (n--)
    {
        cout << array[i] << " ";
        i++;
    }
    return 0;
}
