// https://codeforces.com/problemset/problem/1666/D

#include <bits/stdc++.h>
using namespace std ;

void solve(){
    string s, t ;
    cin>> s >> t ;

    int n = s.size() ;
    int m = t.size() ;

    vector<pair<int, int>> last ;

    for(int j = m - 1 ; j >= 0 ; j--){
        bool found = false ;
        for(int i = n - 1 ; i >= 0 ; i--){
            if(s[i] == t[j]){
                found = true ;
                last.push_back({s[i], i});
                s[i] = '*';
                break ;
            }
        }

        if(!found){
            cout<<"NO"<<endl ;
            return ;
        }
    }


    // for(auto &it : last) cout<< it.first <<" "<<it.second<<endl ;

    for(int i = 1 ; i < last.size() ; i++){
        if(last[i].second > last[i - 1].second){
            cout<< "NO" <<endl ;
            return ;
        } 
    }

    cout<< "YES" <<endl ;
}


int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve() ;
    }
}