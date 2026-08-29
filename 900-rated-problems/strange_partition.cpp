#include <bits/stdc++.h>
using namespace std ;

#define ll long long 

void solve(){
    ll n, x ;
    cin>> n >> x ;

    vector<ll>a(n);
    for(auto &it : a) cin>> it ;

    ll min_ans = 0 ;
    ll max_ans = 0 ;

    ll sum = accumulate(a.begin(), a.end(), 0LL);

    max_ans = (sum % x == 0) ? sum / x : (sum / x) + 1 ;

    for(ll i = 0 ; i < n ; i++){
        min_ans += (a[i] % x == 0) ? a[i] / x : (a[i]/x) + 1 ;
    }

    cout<< max_ans <<" "<<min_ans <<endl ;
}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}