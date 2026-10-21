#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sales[1000];
    for (int i = 0; i < n; i++)
        cin >> sales[i];

    int threshold;
    cin >> threshold;

    int result[1000];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (sales[i] >= threshold)
        {
            result[count] = sales[i];
            count++;
        }
    }

    cout << "[";

    for (int i = 0; i < count; i++)
    {
        cout << result[i];

        if (i != count - 1)
            cout << ", ";
    }

    cout << "]";

    return 0;
}
