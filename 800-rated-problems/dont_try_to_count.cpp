#include <bits/stdc++.h>
using namespace std ;


void solve(){
    int n , m;
    cin>> n >> m ;


    string x ;
    cin>> x ;

    string s ;
    cin>> s ;

    int ans = 0 ;

    while((x.find(s) == string::npos)){

        if(x.size() > max(n, m) * 4){
            ans = -1 ;
            break ;
        }
        x = x + x ;
        ans++ ;
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