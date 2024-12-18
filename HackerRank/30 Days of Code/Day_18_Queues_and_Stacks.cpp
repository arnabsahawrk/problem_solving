#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution
{
private:
    stack<char> charStack;
    queue<char> charQueue;

public:
    void pushCharacter(char ch)
    {
        charStack.push(ch);
    }

    void enqueueCharacter(char ch)
    {
        charQueue.push(ch);
    }

    char popCharacter()
    {
        char top = charStack.top();
        charStack.pop();
        return top;
    }

    char dequeueCharacter()
    {
        char front = charQueue.front();
        charQueue.pop();
        return front;
    }
};

int main()
{
    string s;
    getline(cin, s);

    Solution obj;

    for (char ch : s)
    {
        obj.pushCharacter(ch);
        obj.enqueueCharacter(ch);
    }

    bool isPalindrome = true;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "The word, " << s << ", is a palindrome." << endl;
    }
    else
    {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }

    return 0;
}
