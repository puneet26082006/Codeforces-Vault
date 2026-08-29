// https://codeforces.com/problemset/problem/1696/B

#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>> n ;

    vector<int>a(n);
    for(auto &it : a) cin>> it ;

    int zeros = 0 ;
    for(auto &it : a) {
        if(it == 0){
            zeros++ ;
        }
    }

    int left = 0 ;
    int right = n - 1 ;

    while(a[left] == 0){
        left++ ;
    }

    while(a[right] == 0){
        right-- ;
    }

    bool possible = false ;
    for(int i = left ; i <= right ; i++){
        if(a[i] == 0){
            possible = true ;
            break ;
        }
    }

    if(zeros == n){
        cout<< "0" <<endl ;
    } else if(!possible){
        cout<< 1 <<endl ;
    } else {
        cout<< 2 <<endl ;
    }
}


int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve() ;
    }
}