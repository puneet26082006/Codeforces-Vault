// https://codeforces.com/problemset/problem/1875/A


#include <bits/stdc++.h>
using namespace std ;

void solve(){
    long long a, b, n ;
    cin>> a >> b >> n ;

    vector<long long> v(n);
    for(auto &it : v){
        cin>> it ;
    }

    long long ans = b ;

    for(long long i = 0 ; i < n ; i++){
        if(v[i] >= a){
            ans += (a - 1);
        } else {
            ans+= v[i];
        }
    }

    cout<< ans <<endl ;

}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}