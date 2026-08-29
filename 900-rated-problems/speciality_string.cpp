// https://codeforces.com/problemset/problem/2200/C

#include <iostream>
#include <stack>
using namespace std ;


void solve(){
    int n ;
    cin>> n ;

    string s ;
    cin>> s ;

    stack<char>st ;

    for(int i = 0 ; i < n ; i++){
        if(!st.empty() && st.top() == s[i]){
            st.pop() ;
        } else{
            st.push(s[i]);
        }
    }

    if(st.empty()){
        cout<< "YES" <<endl;
    } else {
        cout<< "NO" <<endl ;
    }
}

int main(){
    int t ;
    cin>> t ;

    while(t--){
        solve();
    }
}