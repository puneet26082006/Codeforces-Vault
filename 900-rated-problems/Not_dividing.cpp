// https://codeforces.com/problemset/problem/1794/B


#include<bits/stdc++.h>
using namespace std ;

using ll = long long ;

void solve(){
    ll n ;
    cin>> n ;

    vector<ll> a(n);
    for(auto &it : a) cin>> it ;

    for(ll i = 0 ; i < n ; i++){
        if(a[i] == 1){
            a[i]++ ;
        }
    }

    for(ll i = 0 ; i < n - 1 ; i++){
        if((a[i + 1] % a[i]) == 0){
            a[i + 1]++ ;
        }

    }

    for(auto &it : a) cout<< it <<" ";
    cout<<'\n' ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}