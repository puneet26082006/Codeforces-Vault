#include <bits/stdc++.h>
using namespace std ;

#define ll long long 

void solve(){
    ll n , k ;
    cin>> n >> k;

    vector<ll> v(n * k);

    for(ll i = 0 ; i < n * k ; i++){
        cin>> v[i];
    }

    ll idx = n * k ;
    ll sum = 0 ;

    while(k--){
        idx -= (n / 2) + 1 ;
        sum += v[idx];
    }

    cout<< sum <<endl ;

}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}