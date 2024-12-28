#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else if (p1.second > p2.second)
        return false;
    else
    {
        if (p1.first > p2.first)
            return true;
        else
            return false;
    }
}

int main()
{
    int array[] = {1, 3, 4, 2, 5};
    vector<int> v = {1, 3, 4, 2, 5};

    sort(array, array + 5);
    sort(v.begin(), v.end());

    sort(v.begin(), v.end(), greater<int>());
    sort(array + 2, array + 4, greater<int>());

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a + 3, comp); //{{4, 1}, {2, 1}, {1, 2}}

    for (auto val : a)
    {
        cout << val.first << " " << val.second << endl;
    }

    // Time Complexity of sort(): O(NlogN)

    return 0;
}