// https://codeforces.com/problemset/problem/1582/B

#include <bits/stdc++.h>
using namespace std ;

using ll = long long ;

void solve(){
    ll n ;
    cin>> n ;

    vector<ll> v(n);
    for(auto &it : v) cin>> it ;

    ll zeroes = 0 ;
    ll ones = 0 ;

    for(ll i = 0 ; i < n ; i++){
        if(v[i] == 0){
            zeroes++ ;
        } else if(v[i] == 1){
            ones++ ;
        }
    }

    ll ans = pow(2, zeroes) * (ones);

    cout<< ans <<endl ;


}


int main(){
    int t = 1 ;
    cin>> t ;

    while(t--){
        solve() ;
    }
}