#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = arr[0];
    int best = arr[0] < 0 ? -arr[0] : arr[0];

    for (int i = 1; i < n; i++)
    {
        int current = arr[i] < 0 ? -arr[i] : arr[i];

        if (current < best)
        {
            best = current;
            ans = arr[i];
        }
    }

    cout << ans;

    return 0;
}
