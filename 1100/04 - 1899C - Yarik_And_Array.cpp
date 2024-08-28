#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <cmath>
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

    int pre = -1;
    int sum = 0;
    int maxSum = 0;
    int negs = 0;
    int maxneg = INT_MIN;
    fo(i, n)
    {

        int x;
        cin >> x;

        if (x < 0)
        {
            negs++;
            maxneg = max(maxneg, x);
        }

        int par = abs(x) % 2;

        if (pre != par)
        {
            pre = par;
            sum += x;
            if (sum <= 0)
            {   
                sum = 0;
                pre =-1 ;
            }
        }
        else
        {
            if(x<=0){
                sum = 0 ;
                pre = -1 ;
            }else{
                sum =x ; 
                pre = par ; 
            }
        }
        maxSum = max(maxSum, sum);
    }

    if (negs == n)
    {
        pn(maxneg);
    }
    else
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