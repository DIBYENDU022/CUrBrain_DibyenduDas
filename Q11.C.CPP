#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    const long long MOD = 1000000007;
    long long result = 0;

    for (int i = 0; i < n; i++)
    {
        long long value;
        cin >> value;

        result = (result + value % MOD) % MOD;
    }

    cout << result;

    return 0;
}
