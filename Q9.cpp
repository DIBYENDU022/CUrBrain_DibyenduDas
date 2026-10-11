#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = n + 1;

    while (true)
    {
        bool prime = x >= 2;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
            break;

        x++;
    }

    cout << x;

    return 0;
}
