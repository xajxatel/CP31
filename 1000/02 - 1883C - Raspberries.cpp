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

    int n, k;
    cin >> n >> k;
    int mini = k;
    bool flag = 0;

    if(k==4){
        int twos = 0 ; 
        int fours = 0 ;
        int threes = 0 ;

        fo(i,n){
            int x; cin>>x ;

            if(x%4==0) fours++ ;
            if(x%2==0) twos++ ;
            if(x%4==3) threes++ ;
        }

        if(fours>0 || twos>=2){
            pn(0) ;
            return ; 
        }else if(twos==1 || threes>=1){
            pn(1) ;
            return ; 
        }else{
            pn(2) ;
            return ; 
        }


    }

    fo(i, n)
    {
        int x;
        cin >> x;
        if (x % k == 0)
        {
            flag = 1;
        }

        mini = min(mini, k - (x % k));
    }

    if (flag)
        pn(0);
    else
        pn(mini);
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