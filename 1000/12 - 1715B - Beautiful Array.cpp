#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <cmath>
#include <stack>
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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    vll ans(n, 0);      // Initialize an array of size n with all 0s
    ll min_sum = k * b; // Minimum sum to achieve a beauty of b

    if (min_sum > s)
    {
        // If minimum required sum is greater than given sum, it's impossible
        pn(-1);
        return;
    }

    // Start by setting the first element to the minimum required to achieve beauty b
    ans[0] = min_sum;
    s -= min_sum; // Reduce the remaining sum by the amount already set

    // Distribute the remaining sum `s` among the rest of the elements
    for (int i = 0; i < n; i++)
    {
        if (s == 0)
            break;              // If there's no remaining sum, break
        ll add = min(s, k - 1); // Each element can be increased by at most k-1
        ans[i] += add;          // Increase the current element by `add`
        s -= add;               // Reduce the remaining sum by `add`
    }

    // If we managed to distribute all of `s` within the constraints, print the array
    if (s == 0)
    {
        for (int i = 0; i < n; i++)
        {
            p(ans[i]);
        }
        pn("");
    }
    else
    {
        pn(-1); // Otherwise, output -1 indicating it's impossible
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