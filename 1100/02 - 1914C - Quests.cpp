#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <cmath>
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
    int n, k;
    cin >> n >> k;

    vi a(n);
    vi b(n);

    fo(i, n) cin >> a[i];
    fo(i, n) cin >> b[i];

    int ans = 0;
    int maxDown = b[0];
    int upScore = 0;

    fo(i, n)
    {
        int score = 0;
        upScore += a[i];
        k--;

        maxDown = max(maxDown, b[i]);
        score += upScore + k * maxDown;

        ans = max(score, ans);
        if (k == 0)
            break;
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