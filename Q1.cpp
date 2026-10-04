#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 0)
        n = -n;
    int count = 0;

    if (n == 0)
        count = 1;
    else
    {
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
    }

    if (count % 2 == 0)
        cout << "True";
    else
        cout << "False";

    return 0;
}
