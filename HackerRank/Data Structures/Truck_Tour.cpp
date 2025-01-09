#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Pump
{
    intmax_t distance_next_pump;
    intmax_t amount_petrol;
};

bool can_do_turn(const std::vector<Pump> &pumps, intmax_t start_position)
{

    auto it = pumps.begin();
    auto it_start = pumps.begin() + start_position;
    intmax_t petrol = 0;
    for (std::advance(it, start_position); it != pumps.end(); ++it)
    {
        petrol += it->amount_petrol;
        if (petrol < it->distance_next_pump)
        {
            return false;
        }
        else
        {
            petrol -= it->distance_next_pump;
        }
    }

    for (it = pumps.begin(); it != it_start; ++it)
    {
        petrol += it->amount_petrol;
        if (petrol < it->distance_next_pump)
        {
            return false;
        }
        else
        {
            petrol -= it->distance_next_pump;
        }
    }

    return true;
}

int main()
{
    int N;
    cin >> N;

    std::vector<Pump> pumps(N);

    for (intmax_t i = 0; i < N; ++i)
    {
        cin >> pumps[i].amount_petrol >> pumps[i].distance_next_pump;
    }

    for (intmax_t i = 0; i < N; ++i)
    {
        if (can_do_turn(pumps, i))
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}