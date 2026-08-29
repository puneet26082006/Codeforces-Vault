#include <iostream>
using namespace std ;

int main(){
    int T ;
    cin>> T ;

    while(T--){
        int l, a, b ;
        cin>>l >>a >>b ;

        int ans1 = l - 1 ;
        int ans2 = l - 2 ;

        if(l % 2 != 0 && a % 2 != 0 && b % 2 == 0 ){
            cout<<ans1<<endl ;
        } else if(l % 2 == 0 && a % 2 == 0 && b % 2 == 0 ){
            cout<<ans2<<endl ;
        } else {
            cout<<ans1<<endl ;
        }
    }
}