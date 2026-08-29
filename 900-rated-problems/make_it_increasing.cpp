// https://codeforces.com/problemset/problem/1675/B

#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>> n ;

    vector<int> v(n);
    for(auto &it : v) cin>>it ;

    int ans = 0 ;

    for(int i = n - 2 ; i >= 0 ; i--){
        while(v[i] >= v[i + 1]){
            ans++ ;
            v[i] /= 2 ;

            if(v[i] == 0){
                break ;
            }
        }


        if(v[i] == 0 && v[i + 1] == 0){
            ans = -1 ;
            break ;
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