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
    ll n;
    cin>>n;
    vll a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<ll,pair<ll,ll>>> b;
    b.pb({a[0],{0,0}});
    for(ll i=1;i<n;i++){
        if(a[i]==b.back().F){
            b.back().S.S++;
        }
        else{
            b.pb({a[i],{i,i}});
        }
    }

    ll ans=LLONG_MAX;
    for(ll i=0;i<b.size();i++){
        ll x=b[i].F;
        ll minIdx=b[i].S.F;
        ll maxIdx=b[i].S.S;
        ll val=x*(minIdx)+x*(n-1-maxIdx);
        ans=min(ans,val);
    }
    cout<<ans<<'\n';
}

int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}