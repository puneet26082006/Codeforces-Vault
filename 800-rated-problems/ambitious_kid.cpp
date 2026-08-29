#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>> n ;


    vector<int> a(n);
    for(auto &it : a) cin>> it ;

    for(int i = 0 ; i < n ; i++){
        if(a[i] < 0){
            a[i] = abs(a[i]);
        }
    }

    sort(a.begin(), a.end());

    int ans = abs(a[0]);

    cout<< ans <<endl ;


}


int main(){
    int t  = 1 ;
    // cin>> t ;

    while(t--){
        solve() ;
    }
}