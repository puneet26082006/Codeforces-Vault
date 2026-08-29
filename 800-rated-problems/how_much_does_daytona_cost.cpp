#include <bits/stdc++.h>
using namespace std ;

void solve() {
    int n, k ;
    cin>> n >> k;


    vector<int> a(n);
    for(auto &it : a) cin>> it ;

    for(auto &it : a) {
        if(it == k){
            cout<< "YES" <<endl ;
            return ;
        }
    }

    cout<< "NO" <<endl ;
}


int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}