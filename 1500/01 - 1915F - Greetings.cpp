#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// include the above header files 
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define fo(i, n) for (int i = 0; i < n; i++)
void solve(){
    int n ; 
    cin>>n ; 

    vector<pair<int,int>> arr (n); 

    fo(i,n){
        cin>>arr[i].first ;
        cin>>arr[i].second; 
    }

    sort(arr.begin() , arr.end()); 
    long long  greet =0 ; 
    oset<int> st ;
    fo(i,n){
        st.insert(arr[i].second) ;
    }
    
    fo(i,n){
        greet+= st.order_of_key(arr[i].second) ;
        st.erase(arr[i].second) ;
    }
    
    cout<<greet<<endl ; 
    
}

int main(){
    
    int t ;
    cin>>t ; 
    
    while(t--){
        solve() ;
    }
}