# include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>> n ;

    string s ;
    cin>> s ;

    int len = 1 ;

    int ans = 1;

    for(int i = 1 ; i < n ; i++){
        if(s[i] == s[i  - 1]){
            len++ ;
        } else {
            len = 1 ;
        }

        ans = max(ans, len);
    }

    cout<< ans + 1<<endl ;
}

int main(){
    int t ;
    cin >> t ;


    while(t--){
        solve();
    }
}