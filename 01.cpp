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
    ll mini=1,maxi=1,steps=2;
    while(maxi<n){
        mini*=2;
        maxi=maxi*2+1;
        steps+=2;
    }
    cout<<steps+1<<'\n';
}

int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}