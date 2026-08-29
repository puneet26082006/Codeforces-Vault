#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>> n ;

    vector<int> v(n);

    for(auto &it : v) cin>> it ;
    
    map<int, int> mp;
    for(auto &it : v) mp[it]++ ;

    int high_freq = INT_MIN ;

    for(auto &it : mp){
        high_freq = max(high_freq, it.second);
    }

    int ans = 0 ;

    while(high_freq < n){
        ans++ ;
        if(high_freq * 2 <= n ){
            ans += high_freq ;
            high_freq *= 2 ;
        } else {
            ans += n - high_freq ;
            high_freq = n ;
        }
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