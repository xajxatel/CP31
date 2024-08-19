#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int minn = numeric_limits<int>::max();
        vector<int> min2;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> v(m);

            for (int j = 0; j < m; j++)
            {
                cin >> v[j];
            }

            int minel = *min_element(v.begin(), v.end());
            minn = min(minn, minel);

            v.erase(find(v.begin(), v.end(), minel));
            min2.push_back(*min_element(v.begin(), v.end()));
        }

        long long sum_min2 = accumulate(min2.begin(), min2.end(), 0ll);
        int smallest_min2 = *min_element(min2.begin(), min2.end());

        cout << minn + sum_min2 - smallest_min2 << "\n";
    }

    return 0;
}