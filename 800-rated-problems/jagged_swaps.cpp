#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>> n ;

    vector<int> a(n);
    for(auto &it : a) cin>> it ;


    if(a[0] == 1){
        cout<< "YES" <<endl ;
    } else {
        cout<< "NO" <<endl ;
    }


}


int main(){
    int t ;
    cin>> t ;


    while(t--){
        solve();
    }
}