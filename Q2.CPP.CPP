#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rev = 0;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    rev = rev * sign;

    cout << rev * 2;

    return 0;
}
