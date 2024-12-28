#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {33, 32, 756, 45, 2, 1, 999};

    int maxi = *max_element(array, array + 7);
    int mini = *min_element(array, array + 7);

    cout << maxi << endl;
    cout << mini << endl;
    return 0;
}