#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
#define fr(i,n) for (ll i=0;i<n;i++)
#define pb push_back
#define sz(x) (int)x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
// typedef tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

/*
**************************************************************************************************
**************************************************************************************************


                    ***        **************
                    ***        **************
                    ***  ***   ***   ***
                    ***  ***   ***   ***
                    ***        ***
                    *************************
                    *************************
                               ***        ***
                         ***   ***   ***  ***
                         ***   ***   ***  ***
                    **************        ***
                    **************        ***

**************************************************************************************************
**************************************************************************************************
*/
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#pragma GCC optimize("unroll-loops,O3,Ofast") //even 10^8+ also works with this
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int knightx[8] = { -1, -2, -2, -1, 1, 2, 2, 1};
int knighty[8] = { -2, -1, 1, 2, 2, 1, -1, -2};





void solve() {
    ll n, m, x , y;
    cin>> n >> m >> x >> y  ;

    vector<ll> a(x);
    for(auto &it : a) cin>> it ;

    vector<ll> b(y);
    for(auto &it : b) cin>> it ;

    vector<pair<ll, ll>> pairs ;

    ll i = 0 , j = 0 ;

    while(i < x && j < y){
        if(a[i] == b[j]){
            pairs.pb({a[i], 3});
            i++ ;
            j++ ;
        } else if(a[i] < b[j]){
            pairs.pb({a[i], 1});
            i++ ;
        } else {
            pairs.pb({b[j], 2});
            j++ ;
        }
    }

    while(i < x) {
        pairs.pb({a[i], 1});
        i++ ;
    }
    while(j < y) {
        pairs.pb({b[j], 2});
        j++ ;
    }

    sort(pairs.rbegin(), pairs.rend());

    ll ans = 0 ;
    ll cnt_a = 0 ;
    ll cnt_b = 0 ;
    ll cnt_ab = 0 ;

    for(auto &it : pairs){
        ll val = it.ff ;
        ll type = it.ss ;

        if(cnt_a + cnt_b + cnt_ab >= n + m - 1) break ;

        if(type == 1) {
            if(cnt_a < n){
                cnt_a++ ;
                ans += val ;

            }
        }
        else if(type == 2){
            if(cnt_b < m){
                cnt_b++ ;
                ans += val ;
            }
        } else {
            cnt_ab ++ ;
            ans += val ;
        }
    }

    cout<< ans <<endl ;



}






int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}


