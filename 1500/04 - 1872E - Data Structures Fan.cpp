#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>

#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define foab(i, a, b) for (int i = a; i < b; i++)
#define fact(n) ([](int x) { int result = 1; for (int i = 2; i <= x; ++i) result *= i; return result; }(n))

#define gcd(a, b) gcd_impl(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
template <typename T>
T gcd_impl(T a, T b)
{
    while (b != 0)
    {
        T temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
#define sumn(n) ((n) * ((n) + 1) / 2)
#define sumab(a, b) (sumn(b) - sumn((a) - 1))
#define minheapi priority_queue<int, vector<int>, greater<int>>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define vll vector<ll>
#define vull vector<ull>
#define pn(text) cout << text << endl
#define p(text) cout << text << " "
#define readarr(arr, n) fo(i, n) cin >> arr[i]
#define printarr(arr, n) \
    fo(i, n) p(arr[i]);  \
    pn("")

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

void dream_ing()
{
    int n;
    cin >> n;

    vi a(n + 1);
    vi pre(n + 1, 0);

    fo(i, n + 1)
    {
        if (i == 0)
            continue;
        cin >> a[i];

        pre[i] = pre[i - 1] ^ a[i];
    }

    string s;
    cin >> s;
    s = '0' + s;
    vi xors(2, 0);
    foab(i, 1, n + 1)
    {
        xors[s[i] - '0'] ^= a[i];
    }

    int cummxor = 0;

    int q;
    cin >> q;

    while (q--)
    {
        int tp;
        cin >> tp;

        if (tp == 1)
        {
            int l, r;
            cin >> l >> r;

            cummxor ^= pre[l - 1] ^ pre[r];
        }
        else
        {
            int g;
            cin >> g;
            int ans = cummxor ^ xors[g];
            p(ans);
        }
    }
    pn("");
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