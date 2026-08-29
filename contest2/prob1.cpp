#include <iostream> 
#include <vector> 
using namespace std ;

int main(){
    int T ;
    cin>> T ;

    while(T--){
        int N ;
        cin>> N ;

        vector<int> arr(N) ;

        for(int i = 0 ; i < N ; i++){
            cin>> arr[i];
        }

        int operations = 0 ;
        
        for(int i = 0 ; i < N ; i++){
            for(int j = i + 1 ; j < N ; j++){
                if(arr[i] > arr[j] && arr[j] != 0){
                    operations++ ;
                    arr[j] = 0 ;
                }

            }
        }

        cout<<operations<<endl ;

    }
}