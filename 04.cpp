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
    vll a(m);
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vvll ans(n,vll(6));
    ll j=0;
    for(ll i=0;i<n;i+=2){
        ll min1=a[j];
        ll max1=a[m-1-j];
        for(ll k=0;k<6;k+=2){
            ans[i][k]=min1;
            ans[i][k+1]=max1;
        }
        if(i+1<n){
            for(ll k=0;k<6;k+=2){
                ans[i+1][k]=max1;
                ans[i+1][k+1]=min1;
            }
        }
        j++;
    }
    for(ll i=0;i<n;i++){
        for(auto it:ans[i]){
            cout<<it<<" ";
        }
        cout<<'\n';
    }

}

int main(){
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
}