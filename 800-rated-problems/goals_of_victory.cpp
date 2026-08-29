#include <bits/stdc++.h>
using namespace std ;

void solve() {
    int n ;
    cin>> n ;

    vector<int> a(n - 1);
    for(auto &it : a) cin>> it ;

    int sum = 0 ;

    for(int i = 0 ; i < n - 1 ; i++ ){
        sum += a[i];
    }

    int ans = (sum * -1) ;

    cout<< ans <<endl ;
}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve() ;
    }
}