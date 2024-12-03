#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(!(n & 1) && (n >= 2 && n<=4))
    cout<<"Not Weird";
    else if(!(n & 1) && (n >= 6 && n<=20))
    cout<<"Weird";
    else if(!(n & 1))
    cout<<"Not Weird";
    else
    cout<<"Weird";
    return 0;
}