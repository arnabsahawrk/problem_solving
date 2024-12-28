#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v; // dynamic array

    // adding an element
    v.push_back(1);
    v.emplace_back(2); // it is similar to push_back but emplace_back is faster than push_back.

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // declaration
    vector<int> v1(5);
    vector<int> v2(5, 100);
    vector<int> v3(v2);
    vector<int> v4 = {1, 2, 3, 4, 5};

    // iterator
    vector<int>::iterator it = v4.begin();
    it++;
    cout << *(it) << endl;
    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator it2 = v4.end(); // it points after the last point
    it2--;
    cout << *(it2) << endl;

    cout << v4[0] << " " << v4.at(0) << endl;
    cout << v4.back() << endl;

    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // deletion {1, 2, 3, 4, 5}
    v4.erase(v4.begin() + 1);           //{1, 3, 4, 5}
    v4.erase(v4.begin() + 2, v4.end()); //{1, 3}

    for (auto val : v4)
    {
        cout << val << " ";
    }
    cout << endl;

    // insertion {1, 3}
    v4.insert(v4.begin(), 300);      //{300, 1, 3}
    v4.insert(v4.begin() + 1, 2, 5); //{300, 5, 5, 1, 3}

    vector<int> copy(2, 50);                             //{50, 50}
    v4.insert(v4.begin() + 1, copy.begin(), copy.end()); //{300, 50, 50, 5, 5, 1, 3}

    for (auto val : v4)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << v4.size() << endl; // 7

    v4.pop_back(); // remove element from the end

    // swap
    vector<int> vec2 = {10, 20};
    vector<int> vec3 = {30, 40};
    vec2.swap(vec3); // vec2 ==> {30, 40} // vec3 ==> {10, 20}
    cout << vec2[1] << " " << vec3[1] << endl;

    v4.clear();         // erases the entire vector
    cout << v4.empty(); // true

    return 0;
}