#include <iostream>
#include <vector>
using namespace std ;

int main(){
    int T ;
    cin>> T ;

    while(T--){
        int N ;
        cin>> N ;

        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin>> arr[i];
        }

        int max = -1 ;

        for(int i = 0 ; i < N ; i++){
            if(arr[i] > max ){
                max = arr[i];
            }
        }
        cout<< max * N << endl ;
    }
}