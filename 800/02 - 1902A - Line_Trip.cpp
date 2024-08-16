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
    int n, x;
    int ans = -1e9;
    cin >> n >> x;

    int prev = 0;
    int a;
    fo(i, n)
    {

        cin >> a;

        ans = max(a - prev, ans);
        prev = a;
    }

    ans = max(2 * (x - prev), ans);

    cout << ans << endl;
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