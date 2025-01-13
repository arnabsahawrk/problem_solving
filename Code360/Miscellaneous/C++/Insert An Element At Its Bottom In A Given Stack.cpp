#include <bits/stdc++.h>
using namespace std;
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return myStack;
    }

    int topValue = myStack.top();
    myStack.pop();

    pushAtBottom(myStack, x);
    myStack.push(topValue);

    return myStack;
}