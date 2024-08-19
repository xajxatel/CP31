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
    cin >> n;

    vector<vector<int>> arr(3, vector<int>(n));

    fo(i, 3)
    {
        fo(j, n)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<pair<int, int>>> b(3);

    for (int i = 0; i < 3; i++)
    {
        int max1, max2, max3;
        max1 = max2 = max3 = -1e9;
        int i1, i2, i3;
        for (int j = 0; j < n; j++)
        {

            if (arr[i][j] > max1)
            {
                max3 = max2;
                i3 = i2;
                max2 = max1;
                i2 = i1;
                max1 = arr[i][j];
                i1 = j;
            }
            else if (arr[i][j] > max2)
            {
                max3 = max2;
                i3 = i2;
                max2 = arr[i][j];
                i2 = j;
            }
            else if (arr[i][j] > max3)
            {
                max3 = arr[i][j];
                i3 = j;
            }
        }
        b[i].pb({max1, i1});
        b[i].pb({max2, i2});
        b[i].pb({max3, i3});
    }

    int maxSum = 0;
    int sum = 0;
    for (auto ele1 : b[0])
    {
        int val1 = ele1.first;
        int ind1 = ele1.second;

        for (auto ele2 : b[1])
        {
            int val2 = ele2.first;
            int ind2 = ele2.second;

            if (ind2 == ind1)
                continue;

            for (auto ele3 : b[2])
            {
                int val3 = ele3.first;
                int ind3 = ele3.second;

                if (ind1 == ind3 || ind2 == ind3)
                    continue;

                sum = val1 + val2 + val3;

                maxSum = max(maxSum, sum);
            }
        }
    }

    pn(maxSum);
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