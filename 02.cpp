#include<bits/stdc++.h>
using namespace std;
// For ordered_set
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
 using namespace __gnu_pbds;
 #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
//Data Types
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<ll>> vvll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

//Certain Strings using macros
#define F first
#define S second
#define pb push_back
#define MP make_pair
#define mod 1000000007
static const bool Init = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();

void solve(){
    ll n,m;
    cin>>n>>m;
    vvll a(m,vll(3));
    for(ll i=0;i<m;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }

    vll fib(n);
    fib[0]=1,fib[1]=2;
    for(ll i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    vector<bool>ans(m,0);
    for(ll i=0;i<m;i++){
        ll w=a[i][0],l=a[i][1],h=a[i][2];
        if(w>=fib[n-1] && l>=fib[n-1] && h>=fib[n-1]){
            ll h1=h-fib[n-1];
            ll l1=l-fib[n-1];
            ll w1=w-fib[n-1];
            if(h1>=fib[n-2] || l1>=fib[n-2] || w1>=fib[n-2]){
                ans[i]=1;
            }
        }
    }
    for(auto it:ans){
        cout<<it;
    }cout<<'\n';
}

int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}