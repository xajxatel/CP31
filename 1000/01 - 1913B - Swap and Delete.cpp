#include <iostream>
#include <unordered_map>

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
#define luom(m)               \
    ({                        \
        auto it = m.begin();  \
        auto last_it = it;    \
        while (it != m.end()) \
        {                     \
            last_it = it;     \
            ++it;             \
        }                     \
        *last_it;             \
    }) // M
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

void xajxatel()
{

    string s;
    cin >> s;

    int n = s.size();

    unordered_map<char, int> mpp;

    fo(i, n) mpp[s[i]]++;

    int i = 0;

    for (i = 0; i < n; i++)
    {

        if (s[i] == '0')
        {
            if (mpp.find('1') == mpp.end() || mpp['1'] == 0)
            {
                pn(n - i);
                return;
            }
            else
            {
                mpp['1']--;
            }
        }
        else
        {
            if (mpp.find('0') == mpp.end() || mpp['0'] == 0)
            {
                pn(n - i);
                return;
            }
            else
            {
                mpp['0']--;
            }
        }
    }

    pn(0);
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