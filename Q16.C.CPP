#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 0, second = 0;
    bool hasFirst = false, hasSecond = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (!hasFirst)
        {
            first = x;
            hasFirst = true;
        }
        else if (x == first)
        {
            continue;
        }
        else if (x > first)
        {
            second = first;
            hasSecond = true;
            first = x;
        }
        else if (!hasSecond || x > second)
        {
            second = x;
            hasSecond = true;
        }
    }

    if (hasSecond)
        cout << second;
    else
        cout << -1;

    return 0;
}
