// https://codeforces.com/problemset/problem/1904/A 

#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int a,b;
    cin>> a >> b ;

    int xk, yk ;
    cin>> xk >> yk ;

    int xq, yq ;
    cin>> xq >> yq ;

    set<pair<int, int>> st1 ;
    set<pair<int, int>> st2 ;

    st1.insert({xk + a, yk + b});
    st1.insert({xk + b, yk + a});
    st1.insert({xk - a, yk + b});
    st1.insert({xk + b, yk - a});
    st1.insert({xk - b, yk - a});
    st1.insert({xk - a, yk - b});
    st1.insert({xk - b, yk + a});
    st1.insert({xk + a, yk - b});

    st2.insert({xq + a, yq + b});
    st2.insert({xq + b, yq + a});
    st2.insert({xq - a, yq + b});
    st2.insert({xq + b, yq - a});
    st2.insert({xq - b, yq - a});
    st2.insert({xq - a, yq - b});
    st2.insert({xq - b, yq + a});
    st2.insert({xq + a, yq - b});


    int ans = 0 ;

    for(auto &it : st1){
        if(st2.find(it) != st2.end()){
            ans++ ;
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