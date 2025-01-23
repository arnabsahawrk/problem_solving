#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority queue use heap mechanism under the hood.

    // Maximum Heap -> high to low
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(3);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;

    // size swap empty function same as others

    // Minimum Heap -> low to high
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);
    pq2.push(2);
    pq2.push(3);
    pq2.push(8);
    pq2.emplace(10);

    cout << pq2.top() << endl;

    return 0;
}