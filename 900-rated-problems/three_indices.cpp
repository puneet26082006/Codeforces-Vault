#include <bits/stdc++.h>
using namespace std ;


void solve(){
    int n ;
    cin>> n ;

    vector<int> a(n);
    for(auto &it : a) cin>> it ;

    for(int i = 1 ; i < n - 1 ; i++){
        if(a[i] > a[i - 1] && a[i] > a[i + 1]){
            cout<<"YES" <<endl ;
            cout<< i <<" "<< i + 1 <<" "<< i + 2 <<endl; // 1 based idx
            return ;
        }
    }

    cout<< "NO" <<endl ;

}


int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}