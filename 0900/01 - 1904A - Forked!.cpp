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

ll countSubsequences(ll n, ll a, ll b)
{

    ll t = (b - a + 1) * n - ((a + b - 2) * (b - a + 1)) / 2;
    return t;
}

void dream_ing()
{
    int a, b;

    cin >> a >> b;

    int xk, yk;

    cin >> xk >> yk;

    int xq, yq;

    cin >> xq >> yq;

    vector<pair<int, int>> directions = {{a, b}, {-a, -b}, {-a, b}, {a, -b}, {b, a}, {-b, -a}, {-b, a}, {b, -a}};

    set<pair<int, int>> st1;
    set<pair<int, int>> st2;

    for (auto dir : directions)
    {

        st1.insert({dir.first + xk, dir.second + yk});
        st2.insert({dir.first + xq, dir.second + yq});
    }
    int cnt = 0;
    for (auto e1 : st1)
    {

        if (st2.find(e1) != st2.end())
            cnt++;
    }

    pn(cnt);
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