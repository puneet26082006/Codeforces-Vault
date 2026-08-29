// https://codeforces.com/problemset/problem/1606/A

#include <bits/stdc++.h>

using namespace std ;

void solve(){
    string s ;
    cin>> s ;

    int n = s.size() ;

    if(s[0] == s[n - 1]){
        cout<< s <<endl ;
        return ;
    } else {
        s[n - 1] = s[0] ;
    }

    cout<< s <<endl ;
}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve() ;
    }
}