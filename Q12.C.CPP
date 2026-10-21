#include <iostream>
using namespace std;

int main()
{
    long long base, power, MOD;
    cin >> base >> power >> MOD;

    long long result = 1 % MOD;

    for (long long i = 0; i < power; i++)
    {
        result = (result * base) % MOD;
    }

    cout << result;

    return 0;
}
