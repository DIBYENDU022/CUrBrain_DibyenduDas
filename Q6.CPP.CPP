#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int countA = 0;
    int countB = 0;

    if (n == 0)
    {
        if (a == 0)
            countA++;

        if (b == 0)
            countB++;
    }
    else
    {
        while (n != 0)
        {
            int digit = n % 10;

            if (digit == a)
                countA++;

            if (digit == b)
                countB++;

            n = n / 10;
        }
    }

    int answer = countA - countB;

    if (answer < 0)
        answer = -answer;

    cout << answer;

    return 0;
}
