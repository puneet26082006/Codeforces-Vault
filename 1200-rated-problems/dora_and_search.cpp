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
    int n ;
    cin>> n ;

    vector<int> a(n) ;
    for(auto &it : a) cin>>it ;

    vector<int> nsr(n) ;
    vector<int> ngr(n) ;
    vector<int> nsl(n) ;
    vector<int> ngl(n) ;

    stack<int> st1 ;
    stack<int> st2 ;

    for(int i = 0 ; i < n ; i++){
        while(!st1.empty() && a[st1.top()] >= a[i]) st1.pop() ;

        if(st1.empty())    nsl[i] = -1 ;
        else nsl[i] = st1.top() ;

        st1.push(i) ;

        while(!st2.empty() && a[st2.top()] <= a[i]) st2.pop() ;
        
        if(st2.empty()) ngl[i] = -1 ;
        else ngl[i] = st2.top() ;
        
        st2.push(i) ;
    }
    
    while(!st1.empty()){
        st1.pop() ;
    }

    while(!st2.empty()){
        st2.pop() ;
    }

    for(int i = n - 1 ; i >= 0 ; i--){
        while(!st1.empty() && a[st1.top()] >= a[i]) st1.pop() ;

        if(st1.empty())    nsr[i] = -1 ;
        else nsr[i] = st1.top() ;

        st1.push(i) ;

        while(!st2.empty() && a[st2.top()] <= a[i]) st2.pop() ;
        
        if(st2.empty()) ngr[i] = -1 ;
        else ngr[i] = st2.top() ;
        
        st2.push(i) ;
    }

    int idx1 = 0 ;
    int idx2 = n - 1 ;

    for(int i = 0 ; i < n ; i++){
        if(idx1 >= idx2) break ;

        if(nsr[idx1] > idx2 || ngr[idx1] > idx2 || ngr[idx1] == -1 || nsr[idx1] == -1){
            idx1++ ;
        }

        else if(nsl[idx2] < idx1 || ngl[idx2] < idx1 || ngl[idx2] == -1 || nsl[idx2] == -1){
            idx2-- ;
        } 
        
        else {
            break ;
        }
    }

    if(idx1 < idx2){
        cout<< idx1 + 1 <<" "<<idx2 + 1 <<endl ;
    } else {
        cout<< -1 <<endl ;
    }



}






int main() {
#ifndef ONLINE_JUDGE
    freopen("C:/Users/puneet saxena/OneDrive/Desktop/Codeforces/Error.txt", "w", stderr);
    
#endif
    fastio();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}


