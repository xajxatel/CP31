#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
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
    int n, m;

    cin >> n >> m;

    string x, substr;
    cin >> x >> substr;

    if (x.find(substr) != string::npos)
    {
        pn(0);
        return;
    }

    for (int i = 0; i < 6; i++)
    {
        x = x + x;
        if (x.find(substr) != string::npos)
        {
            pn(i + 1);
            return;
        }
    }

    pn(-1);
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