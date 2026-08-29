// https://codeforces.com/problemset/problem/1679/A

#include <bits/stdc++.h>
using namespace std ;

using ll = long long ;

void solve(){
    ll n ;
    cin>> n ;

    
    if(n < 4 || n % 2 == 1){
        cout<< -1 <<endl ;
        return ;
    } else {
        ll min_ans = (n % 6 == 0) ? n/6 : (n/6) + 1 ;   // ceil value of n/6 == (n + 5) / 6 ;
        ll max_ans = n / 4 ;

        cout<< min_ans <<" "<< max_ans <<endl ;
    }

}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve() ;
    }
}