#include <iostream>
#include <iomanip>
#include <ios>
#include <istream>
#include <ostream>
#include <fstream>
#include <sstream>
#include <streambuf>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <queue>
#include <stack>
#include <algorithm>
#include <iterator>
#include <utility>
#include <limits>
#include <numeric>
#include <functional>
#include <cassert>
#include <cmath>
#include <complex>
#include <valarray>
#include <locale>
#include <clocale>
#include <cctype>
#include <cwctype>
#include <cstddef>
#include <typeinfo>
#include <exception>
#include <stdexcept>
#include <new>
#include <memory>
#include <type_traits>
#include <tuple>
#include <chrono>
#include <random>
#include <ratio>
#include <mutex>
#include <thread>
#include <atomic>
#include <condition_variable>
#include <future>
#include <regex>
#include <system_error>
#include <cstdint>
#include <initializer_list>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define foab(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define pn(text) cout << text << endl
#define p(text) cout << text << " "
#define readArray(arr, n) fo(i, n) cin >> arr[i]
#define printArray(arr, n) \
    fo(i, n) p(arr[i]);    \
    pn("")
using namespace std;

template <typename T>
bool isSort(const vector<T> &arr, int a, int b)
{
    foab(i, a, b - 1)
    { // Loop from a to b-1
        if (arr[i] > arr[i + 1])
        { // Check if the current element is greater than the next
            return false;
        }
    }
    return true;
}
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

void xajxatel()
{
    int n;
    cin >> n;

    vll arr(n);
    bool flag = 1;
    fo(i, n)
    {
        cin >> arr[i];
        if (arr[i] == 1 && i > 0)
        {
            flag = 0;
        }
    }

    if (flag)
        pn("yes");
    else
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