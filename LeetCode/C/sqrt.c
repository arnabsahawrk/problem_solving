#include <stdio.h>

int mySqrt(int x)
{
    if (x == 0)
        return 0;
    long root = x;

    while (root * root > x)
    {
        root = (root + x / root) / 2;
    }
    return (int)root;
}

int main()
{
    printf("%d", mySqrt(9));
    return 0;
}
