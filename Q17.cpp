#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        int id;
        cin >> id;
        freq[id]++;
    }

    int ans = 0;
    int best = 0;

    for (auto p : freq)
    {
        if (p.second > best || (p.second == best && p.first < ans))
        {
            best = p.second;
            ans = p.first;
        }
    }

    cout << ans;

    return 0;
}
