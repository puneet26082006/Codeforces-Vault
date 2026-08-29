#include <iostream>
#include <vector>
using namespace std ;

int main() {
    int T ;
    cin >> T ;

    while(T--){
        int N, M, H ;
        cin >>N >>M>> H ;

        vector<int> arr(N) ;
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i] ;
        }

        vector<int> brr(M) ;
        for(int i = 0 ; i < M ; i++){
            cin >> brr[i] ;
        }

        vector<int> crr(H) ;
        for(int i = 0 ; i < H ; i++){
            cin >> crr[i] ;
        }

        for(int i = 0 ; i < N ; i++){
            arr[i] = arr[i] + crr[i] ;
            if(arr[i] > H){
                arr[i] = arr[i] - crr[i] ;
            } else {
                
            }
        }

    }
}