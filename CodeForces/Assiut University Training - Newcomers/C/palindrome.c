#include <stdio.h>
int main()
{
    int numb;
    scanf("%d", &numb);

    int input = numb;
    int isPalindrome = 0;
    while (input != 0)
    {
        isPalindrome = (input % 10) + (isPalindrome * 10);
        input /= 10;
    }

    if (isPalindrome != numb)
        printf("%d\nNO", isPalindrome);
    else
        printf("%d\nYES", isPalindrome);
}