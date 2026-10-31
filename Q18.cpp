#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start, end;
    cin >> start >> end;

    int i = start;
    int j = end;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    cout << "[";

    for (int k = 0; k < n; k++)
    {
        cout << arr[k];

        if (k != n - 1)
            cout << ", ";
    }

    cout << "]";

    return 0;
}
