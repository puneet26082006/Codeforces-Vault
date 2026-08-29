#include <bits/stdc++.h>
using namespace std ;

void solve(){
    string s ;
    cin>> s ;

    int ones = 0 ;
    int zero = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '1'){
            ones++ ;
        } else {
            zero++ ;
        }
    }

    int cnt = min(zero, ones);

    if(cnt % 2 == 0){
        cout<< "NET" <<endl ;
    } else {
        cout<< "DA" <<endl ;

    }
}


int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}