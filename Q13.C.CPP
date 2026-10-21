#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long k;
    cin >> k;
    k = abs(k);

    long long sum = 0;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum % k == 0)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "True";
    else
        cout << "False";

    return 0;
}
