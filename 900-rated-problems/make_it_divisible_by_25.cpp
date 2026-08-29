// https://codeforces.com/problemset/problem/1593/B

#include <bits/stdc++.h>
using namespace std ;


void solve(){
    string s ;
    cin>> s ;

    int m = s.size() ;

    vector<string> num = {"00", "50", "25", "75"};

    int ans = 1e9 ;
    for(auto &it : num){
        int first = it[1];
        int second = it[0];

        int pos_first = -1 ;

        for(int i = m - 1 ; i >= 0 ; i--){
            if(s[i] == first){
                pos_first = i ;
                break ;
            } 
        }

        if(pos_first == -1) continue ;

        int pos_second = -1 ;

        for(int i = pos_first - 1 ; i >= 0 ; i-- ){
            if(s[i] == second){
                pos_second = i ;
                break ;
            }
        }

        if(pos_second == -1) continue ;

        int del = m - pos_second - 2;
        
        ans = min(ans, del);
    }

    cout<< ans <<endl ;
}



int main(){
    int t ;
    cin>> t ;


    while(t--){
        solve() ;
    }
}