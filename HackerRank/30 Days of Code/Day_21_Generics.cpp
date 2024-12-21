#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void printArray(vector<T> vec)
{
    for (const T &element : vec)
    {
        cout << element << endl;
    }
}

int main()
{
    int n;

    cin >> n;
    vector<int> int_vector(n);
    for (int i = 0; i < n; i++)
    {
        cin >> int_vector[i];
    }

    cin >> n;
    vector<string> string_vector(n);
    for (int i = 0; i < n; i++)
    {
        cin >> string_vector[i];
    }

    printArray<int>(int_vector);
    printArray<string>(string_vector);

    return 0;
}
