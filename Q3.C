#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int original = n;
    int temp = n;
    int rev = 0;

    if (temp < 0)
        temp = -temp;

    while (temp != 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if (n < 0)
        rev = -rev;

    if (n == rev)
        cout << n;
    else
        cout << n + rev;

    return 0;
}
