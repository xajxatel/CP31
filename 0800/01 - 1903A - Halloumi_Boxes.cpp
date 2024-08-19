#include <iostream>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

void xajxatel()
{
    int n, k;
    cin >> n >> k;
    int prev, current;
    bool sorted = true;

    cin >> prev;
    fo(i, n - 1)
    {
        cin >> current;
        if (current < prev)
        {
            sorted = false;
        }
        prev = current;
    }

    if (sorted)
    {
        cout << "YES" << endl;
        return;
    }

    if (k >= n)
    {
        cout << "YES" << endl;
    }
    else if (k == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        xajxatel();
    }

    return 0;
}