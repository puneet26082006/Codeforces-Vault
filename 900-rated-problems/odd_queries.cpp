// https://codeforces.com/problemset/problem/1807/D


#include <bits/stdc++.h>
using namespace std ;

using ll = long long;

void solve(){
    ll n, q ;
    cin>> n >> q ;

    vector<ll> a(n + 1);
    for(ll i = 1 ; i <= n ; i++){
        cin>> a[i];
    }

    
    vector<ll> pre(n + 1, 0);
    
    for(ll i = 1 ; i <= n ; i++){
        pre[i] = pre[i - 1] + a[i];
    }
    
    ll sum = pre[n];

    while(q--){
        ll l , r, k ;
        cin>> l >> r >> k ;


        ll remove = pre[r] - pre[l - 1];

        ll add = (r - l + 1) * k ;

        ll total = sum + add - remove ;

        if(total % 2 == 0){
            cout<< "NO" <<endl ;
        } else {
            cout<< "YES" <<endl ;
        }


    }
}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}