// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

int main() {
    int T ;
    cin>> T ;
    
    while(T--){
        int N, K ;
        cin>>N >>K ;
        
        string s ;
        cin>>s ;
        
        int count = 0 ;
        int i = 0 ;
        int cant_sleep = -1 ;
        
        while(i < N){
            if(s[i] == '1'){
                cant_sleep = i + K ;
                i++ ;
            } else {
                if(i > cant_sleep){
                    count++ ;
                }
                i++ ;
            }
        }
        
        cout<<count<<endl ;
    }

    return 0;
}