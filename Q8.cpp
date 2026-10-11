#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> f;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            f.push_back(i);

            if (i != n / i)
                f.push_back(n / i);
        }
    }

    sort(f.begin(), f.end());

    if (k > f.size())
        cout << -1;
    else
        cout << f[k - 1];

    return 0;
}
