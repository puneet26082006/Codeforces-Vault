// https://codeforces.com/problemset/problem/1726/A

#include <bits/stdc++.h>
using namespace std ;

using ll = long long ; 


void solve(){
    ll n ;
    cin>> n ;

    vector<ll>a(n);
    
    for(auto &it : a) cin>> it ;

    ll ans = a[n - 1] - a[0];  // first and last diff ;

    for(ll i = 1 ; i < n ; i++){   // max of first and every element difference
        ans = max(ans, a[i] - a[0]);
    }

    for(ll i = n - 2 ; i >= 0 ; i--){  // max of last and every element difference 
        ans = max(ans, a[n - 1] - a[i]);
    }

    for(ll i = 0 ; i < n - 1 ; i++){  // max of every element difference 
        ans = max(ans, a[i] - a[i + 1]);
    }

    cout<< ans <<endl ;
}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve() ;
    }
}