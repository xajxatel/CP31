#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define foab(i, a, b) for (int i = a; i < b; i++)
#define minheapi priority_queue<int, vector<int>, greater<int>>
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define minheapi priority_queue<int, vector<int>, greater<int>>
#define minheapll priority_queue<long long, vector<long long>, greater<long long>>
#define minheapi2 priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define minheapi3 priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>
#define minheapll2 priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>>
#define minheapll3 priority_queue<pair<long long, pair<long long, long long>>, vector<pair<long long, pair<long long, long long>>>, greater<pair<long long, pair<long long, long long>>>>
#define maxheapi priority_queue<int>
#define maxheapll priority_queue<long long>
#define maxheapi2 priority_queue<pair<int, int>>
#define maxheapi3 priority_queue<pair<int, pair<int, int>>>
#define maxheapll2 priority_queue<pair<long long, long long>>
#define maxheapll3 priority_queue<pair<long long, pair<long long, long long>>>
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
    int n, p;
    cin >> n >> p;

    ll cost = 0;

    vi x(n);
    vi y(n);

    fo(i, n) cin >> x[i];
    fo(i, n) cin >> y[i];

    minheapi2 pq;

    fo(i, n)
    {
        pq.push({y[i], x[i]});
    }

    ll left = n;

    left--;
    cost += p;

    while (!pq.empty() && left)
    {
        ll maxPersons = pq.top().second;
        ll fee = pq.top().first;
        pq.pop();

        if (fee <= p)
        {
            int rem = left;
            left = max((ll)0, left - maxPersons);
            if (left == 0)
                cost += (rem * fee);
            else
                cost += (maxPersons * fee);
        }
        else
        {
            left--;
            cost += p;
        }

        if (left == 0)
            break;
    }

    pn(cost);
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