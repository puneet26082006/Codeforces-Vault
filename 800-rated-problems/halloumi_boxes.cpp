#include <bits/stdc++.h>
using namespace std ;


void solve(){
    int n, k;
    cin>> n >> k ;

    vector<int> a(n);
    for(auto &it : a) cin>> it ;

    int j = 1 ;

    for(int i = 0 ; i < n - 1 ; i++){
        if(a[i] == a[i + 1]){
            j++ ;
        }
    }

    if(j == n){
        cout<< "YES" <<endl ;
        return ;
    }
    bool possible = true ;;

    for(int i = 0 ; i < n - 1  ; i++){
        if(a[i] <= a[i + 1]){
            continue ;
        } else {
            possible = false ;
        }
    }

    if(possible){
        cout<<"YES" <<endl ;
        return ;
    } 


    if(k <= 1){
        cout<< "NO" <<endl ;
        return ;
    } else {
        cout<< "YES" <<endl ;
    }



}


int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}