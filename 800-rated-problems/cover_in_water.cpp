#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>> n ;

    string s ;
    cin>> s ;

    int cnt = 0 ;
    int continous = 0 ;
    int max_continous = 0 ;
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '.'){
            cnt++ ;
            continous++ ;
            max_continous = max(max_continous, continous);
        } else {
            continous = 0 ;
        }

    }

    if(max_continous >= 3){
        ans = 2 ;
    } else {
        ans = cnt ;
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