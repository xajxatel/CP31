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

    int n;
    cin >> n;
    ll d;
    cin >> d;
    vi a(n);
    fo(i, n)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int i = 0;
    int j = n - 1;
    int win = 0;

    while (a[j] > d && j >= 0)
    {
        win++;
        j--;
    }
    while (i < j)
    {

        ll mul = 2;
        ll result = a[j] * mul;

        while (result <= d && i < j)
        {
            i++;
            mul++;
            result = a[j] * mul;
        }

        if (result > d && i < j)
            win++;
        i++;
        j--;
    }

    pn(win);
}

int32_t main()
{
    fastIO;
    int t = 1;

    while (t--)
    {
        dream_ing();
    }

    return 0;
}