#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define foab(i, a, b) for (int i = a; i < b; i++)
#define fact(n) ([](int x) { int result = 1; for (int i = 2; i <= x; ++i) result *= i; return result; }(n))
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
using namespace std;
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

void dream_ing()
{
    int n;
    cin>>n ;
    vi a(n);
    vi b(n);

    fo(i, n) cin >> a[i];
    fo(i, n) cin >> b[i];

    vi mpa(2 * n + 1, 0);
    vi mpb(2 * n + 1, 0);

    int si = 0;

    foab(i, 1, n)
    {
        if (a[i] != a[i - 1])
        {

            mpa[a[i - 1]] = max(mpa[a[i - 1]], i - si);
            si = i;
        }
    }

    mpa[a[n - 1]] = max(mpa[a[n - 1]], n - si);
    si = 0;
    foab(i, 1, n)
    {
        if (b[i] != b[i - 1])
        {

            mpb[b[i - 1]] = max(mpb[b[i - 1]], i - si);
            si = i;
        }
    }

    mpb[b[n - 1]] = max(mpb[b[n - 1]], n - si);

    ll ans = 0;
    fo(i, 2*n+1)
    {
        ans = max(ans, (ll)mpa[i] + (ll)mpb[i]);
    }

    pn(ans);
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