#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std ;


int main() {
    int T ;
    cin>> T ;

    while(T--){
        int N , H , L ;
        cin>>N >>H >>L ;

        int row = 0 ;
        int col = 0 ;
        int both = 0 ;

        for(int i = 0 ; i < N ; i++){
            int val ;
            cin>> val ;

            bool fit_row = (val <= H);
            bool fit_col = (val <= L);

            if(fit_row && fit_col){
                both++ ;
            } else if(fit_row){
                row++ ;
            } else if(fit_col){
                col++ ;
            }
        }

        int max_by_row = row + both ;
        int max_by_col = col + both ;

        int max_by_total = (row + col + both)/2 ;


        cout<< min({max_by_row , max_by_col, max_by_total}) << "\n" ;
    }
}