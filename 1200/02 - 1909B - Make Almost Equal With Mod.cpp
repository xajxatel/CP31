#include <iostream>
#include <vector>
#include <cmath>
#define ull unsigned long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define vull vector<ull>
#define pn(text) cout << text << endl
using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

void dream_ing()
{
    int n;
    cin >> n;
    vull a(n);
    fo(i, n) cin >> a[i];

    for (int i = 0; i < 64; i++)
    {
        ull sum = 0;

        fo(j, n)
        {
            ull x = a[j];
            if (x & (1ULL << i))
            {
                sum++;
            }
        }

        // If all bits are the same in this position (all 0s or all 1s), skip
        if (sum == 0 || sum == n)
            continue;

        ull ans = 1ULL << (i + 1);
        pn(ans);
        return;
    }
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;

    while (t--)
    {
        dream_ing();
    }

    return 0;
}