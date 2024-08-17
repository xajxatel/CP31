#include <iostream>
#include<unordered_map>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define foab(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define fom(m) (*(m.begin()))
#define fuom(m) (*(m.begin()))
#define lom(m) (*(m.rbegin()))
#define luom(m)                                                        \
    ({                                                                 \
        auto it = m.begin();                                           \
        auto last_it = it;                                             \
        while (it != m.end()) {                                        \
            last_it = it;                                              \
            ++it;                                                      \
        }                                                              \
        *last_it;                                                      \
    })  // M
#define pn(text) cout << text << endl
#define p(text) cout << text << " "
#define readArray(arr, n) fo(i, n) cin >> arr[i]
#define printArray(arr, n) \
    fo(i, n) p(arr[i]);    \
    pn("")
using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

void xajxatel()
{
    int n;
    cin >> n;

    unordered_map<int, int> mpp;

    fo(i, n)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }

    if (mpp.size() > 2)
    {
        pn("no");
        return;
    }

    if (mpp.size() == 1)
    {
        pn("yes");
        return;
    }

    if (mpp.size() == 2)
    {

        auto fe = fuom(mpp).second;
        auto le = luom(mpp).second;

        if (abs(fe - le) <= 1)
        {
            pn("yes");
            return;
        }
    }

    pn("no");
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