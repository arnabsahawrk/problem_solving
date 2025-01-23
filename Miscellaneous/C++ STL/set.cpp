#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set use balanced BST mechanism under the hood. mean store in sorted order and not contain duplicate

    set<int> st;   // sorted, unique
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), size(), empty(), swap()

    auto it = st.find(3); // return the iterator(memory address) of 3 value if exist

    auto it2 = st.find(6); // if don't exist return after the last element index;

    st.erase(4); // erases 4 //takes logarithmic time

    int cnt = st.count(3); // either 0 or 1;
    cout << cnt << endl;

    auto it3 = st.find(3);
    st.erase(it3); // it takes constant time

    set<int> st2;
    st2.insert(1);
    st2.insert(2);
    st2.insert(3);
    st2.emplace(4);
    st2.insert(5);

    auto it4 = st2.find(2);
    auto it5 = st2.find(4);
    st2.erase(it4, it5);

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does

    auto itr = st2.lower_bound(2);

    auto itr = st2.upper_bound(3);

    // Time Complexity
    // In Set every operation done in (logN)

    return 0;
}