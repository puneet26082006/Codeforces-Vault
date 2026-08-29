#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
    int T ;
    cin>> T ;
    
    while(T--){
        int N ;
        cin>> N ;

        vector<int> A(N) ;
        for(int i = 0 ; i < N ; i++){
            cin>> A[i];
        }

        vector<int> B(N);
        for(int i = 0 ; i < N ; i++){
            cin>> B[i];
        }

        int min_k = 0 ;
        int max_k = 0 ;


        for(int i = 0 ; i < N ; i++){
            int red_low = min_k - A[i];
            int red_high = max_k - A[i];

            int blue_low = B[i] - max_k ;
            int blue_high = B[i] - min_k ;

            min_k = min(red_low, blue_low) ;
            max_k = max(red_high, blue_high) ;
        }

        cout<<max_k<<endl ;

    }
}