#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

class Calculator
{
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0)
        {
            throw invalid_argument("n and p should be non-negative");
        }
        return pow(n, p);
    }
};

int main()
{
    Calculator myCalculator;
    int T, n, p;
    cin >> T;

    while (T--)
    {
        cin >> n >> p;
        try
        {
            int ans = myCalculator.power(n, p);
            cout << ans << endl;
        }
        catch (invalid_argument &e)
        {
            cout << e.what() << endl;
        }
    }

    return 0;
}
