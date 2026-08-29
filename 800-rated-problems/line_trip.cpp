#include <bits/stdc++.h>
using namespace std ;


void solve(){
    int n, x ;
    cin>> n >> x;

    vector<int> a(n);
    for(auto &it : a) cin>> it ;

    int max_fuel = a[0] ;

    for(int i = 1 ; i < n ; i++){
        int fuel = a[i] - a[i - 1];
        if(fuel > max_fuel){
            max_fuel = fuel ;
        }
    }

    max_fuel = max(max_fuel, 2 * (x - a[n - 1]));

    cout<< max_fuel <<endl ;
}


int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}