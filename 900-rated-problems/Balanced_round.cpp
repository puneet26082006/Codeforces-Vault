// https://codeforces.com/problemset/problem/1850/D

#include <bits/stdc++.h>
using namespace std ;


void solve(){
    int n , k ;
    cin>> n >> k ;

    vector<int>a(n);

    for(auto &it : a) cin>> it ;

    sort(a.begin(), a.end());
    
    int max_len = 1 ;
    int ans = 1 ;

    for(int i = 1 ; i < n ; i++){
        if(a[i] - a[i - 1] <= k){
            max_len++ ;
        } else {
            ans = max(ans, max_len);
            max_len = 1 ;
        }

        
    }

    ans = max(ans, max_len) ;

    cout<< n - ans <<endl ;



}
int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}