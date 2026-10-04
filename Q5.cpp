#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int digits[100];
    int count = 0;

    while (n != 0)
    {
        int digit = n % 10;

        if (digit % 2 == 0)
            digit = 0;

        digits[count] = digit;
        count++;

        n = n / 10;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        cout << digits[i];

        if (i != 0)
            cout << " ";
    }

    return 0;
}
