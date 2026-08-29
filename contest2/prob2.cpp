#include<iostream>
#include <string>
using namespace std ;

int main() {
    int T ;
    cin>> T ;

    while(T--){
        int N ;
        cin>> N ;

        string s ;
        cin>> s ;

        string s2 = s + s ;

        int i = 0 ;
        int zero_streak = 0 ;
        int long_zerostreak = 0 ;

        for(char c : s2){
            if(c == '0'){
                zero_streak++ ;
            } else {
                if(zero_streak > long_zerostreak){
                    long_zerostreak = zero_streak ;
                }

                zero_streak = 0 ;
            }
        }

        if(zero_streak > long_zerostreak){
            long_zerostreak = zero_streak;
        }

        cout<<long_zerostreak<<endl ;
    }
}