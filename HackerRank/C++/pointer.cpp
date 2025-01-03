#include <iostream>
#include <cstdlib>
using namespace std;

void update(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;

    update(pa, pb);

    cout << a << endl
         << b;

    return 0;
}